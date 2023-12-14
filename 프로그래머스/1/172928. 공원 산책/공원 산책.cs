using System;

public class Solution {
     private void Moveable(bool[,] isObstacle, ref int currentY, ref int currentX, char direction, int distance)
    {
        int y = currentY;
        int x = currentX;
        while (distance > 0)
        {
            switch (direction)
            {
                case 'E':
                    x++;
                    break;
                case 'W':
                    x--;
                    break;
                case 'N':
                    y--;
                    break;
                default:
                    y++;
                    break;
            }

            if (!(0 <= x && x < isObstacle.GetLength(1) &&
                  0 <= y && y < isObstacle.GetLength(0) &&
                  isObstacle[y, x] != true))
                return;

            distance--;
        }

        currentX = x;
        currentY = y;
    }
    
    public int[] solution(string[] park, string[] routes) {
        int x = -1;
        int y = -1;
        bool[,] isObstacle = new bool[park.Length, park[0].Length];

        for (int i = 0; i < park.Length; i++)
        {
            for (int j = 0; j < park[i].Length; j++)
            {
                switch (park[i][j])
                {
                    case 'S':
                        y = i;
                        x = j;
                        isObstacle[i, j] = false;
                        break;
                    case 'O':
                        isObstacle[i, j] = false;
                        break;
                    case 'X':
                        isObstacle[i, j] = true;
                        break;
                }
            }
        }

        foreach (string route in routes)
        {
            char[] routeChars = route.ToCharArray();
            char direction = routeChars[0];
            int distance = int.Parse(routeChars[2].ToString());

            Moveable(isObstacle, ref y, ref x, direction, distance);
        }

        return new int[] { y, x };
    }
}