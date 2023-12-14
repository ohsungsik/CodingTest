using System;
using System.Collections.Generic;

public class Solution {
    public string solution(string s, string skip, int index) {
        string answer = "";

        HashSet<char> skipHashSet = new HashSet<char>(skip.ToCharArray());

        foreach (char c in s)
        {
            char charactor = c;
            int indexTemp = 0;
            while (indexTemp != index)
            {
                charactor++;
                if (charactor > 'z')
                    charactor = 'a';

                if (!skipHashSet.Contains(charactor))
                    indexTemp++;
            }
            answer += charactor;
        }

        return answer;
    }
}