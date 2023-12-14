using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string[] keymap, string[] targets) {
        List<int> answer = new List<int>();
        Dictionary<char, int> keyMap = new Dictionary<char, int>();

        foreach (string key in keymap)
        {
            for (int i = 0; i < key.Length; i++)
            {
                if (keyMap.ContainsKey(key[i]))
                {
                    if (keyMap[key[i]] > i)
                        keyMap[key[i]] = i + 1;
                }
                else
                {
                    keyMap.Add(key[i], i + 1);
                }
            }
        }

        foreach (string target in targets)
        {
            int count = 0;
            foreach (char c in target)
            {
                if (!keyMap.ContainsKey(c))
                {
                    count = -1;
                    break;
                }

                count += keyMap[c];
            }
            answer.Add(count);
        }

        return answer.ToArray();
    }
}