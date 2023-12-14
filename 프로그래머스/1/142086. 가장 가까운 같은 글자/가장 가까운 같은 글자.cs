using System;

public class Solution {
    public int[] solution(string s) {
        int[] answer = new int[s.Length];
        for (int i = 0; i < s.Length; i++)
        {
            int gap = -1;
            for (int j = i - 1; j >= 0; j--)
            {
                if (s[i] == s[j])
                {
                    gap = i - j;
                    break;
                }

            }

            answer[i] = gap;
        }


        return answer;
    }
}