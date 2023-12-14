using System.Collections.Generic;

public class Solution {
    public int solution(int n) {
        int answer = 0;

        for (int i = 1; i <= n; i++)
        {
            List<int> divisorList = new List<int>();
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    divisorList.Add(j);
                }
            }
            answer += divisorList.Count >= 3 ? 1 : 0;
        }

        return answer;
    }
}