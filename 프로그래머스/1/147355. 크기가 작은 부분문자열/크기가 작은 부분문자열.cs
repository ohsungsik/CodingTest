using System;

public class Solution {
    public int solution(string t, string p) {
        int answer = 0;
        long compareNumber = Convert.ToInt64(p);

        for (int i = 0; i <= t.Length - p.Length; i++)
        {
            long value = Convert.ToInt64(t.Substring(i, p.Length));
            if (value <= compareNumber)
                answer++;
        }

        return answer;
    }
}