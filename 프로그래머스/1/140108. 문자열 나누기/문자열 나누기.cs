using System;

public class Solution {
    public int solution(string s) {
        int answer = 0;

        char compare = '\0';

        int index = 0;

        int compareCharCount = 0;
        int otherCharCount = 0;
        while (index < s.Length)
        {
            if (compare == '\0')
            {
                compare = s[index];
                index++;
                compareCharCount++;
            }
            else
            {
                if (s[index] != compare)
                {
                    otherCharCount++;
                }
                else
                {
                    compareCharCount++;
                }

                index++;

                if (compareCharCount == otherCharCount)
                {
                    compareCharCount = 0;
                    otherCharCount = 0;
                    compare = '\0';

                    answer++;
                }
            }
        }

        if (compare != '\0')
            answer++;

        return answer;
    }
}