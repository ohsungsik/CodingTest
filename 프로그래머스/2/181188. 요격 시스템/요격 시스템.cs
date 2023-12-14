using System.Collections.Generic;
using System.Linq;

public class Solution {
    internal struct Point
    {
        internal int S;
        internal int E;

        internal Point(int s, int e)
        {
            S = s;
            E = e;
        }
    }
    
    public int solution(int[,] targets) {
        int rowCount = targets.GetLength(0);

        List<Point> targetPoints = new List<Point>();

        for (int i = 0; i < rowCount; i++)
            targetPoints.Add(new Point(targets[i, 0], targets[i, 1]));

        targetPoints.Sort((lhs, rhs) => lhs.E.CompareTo(rhs.E));

        int requiredMissileCount = 0;
        int e = -1;
        foreach (Point targetPoint in targetPoints.Where(targetPoint => targetPoint.S >= e))
        {
            requiredMissileCount += 1;
            e = targetPoint.E;
        }

        return requiredMissileCount;
    }
}