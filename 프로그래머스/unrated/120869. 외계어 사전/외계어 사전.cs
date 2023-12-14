using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int solution(string[] spell, string[] dic) {
        int answer = 2;
            
        HashSet<int> availableStringIndexList = new HashSet<int>(Enumerable.Range(0, dic.Length));

        foreach (string t in spell)
        {
            for (int i = 0; i < dic.Length; i++)
            {
                if (!availableStringIndexList.Contains(i)) 
                    continue;

                if (dic[i].Contains(t) && dic[i].IndexOf(t, StringComparison.Ordinal) == dic[i].LastIndexOf(t, StringComparison.Ordinal))
                {
                    availableStringIndexList.Add(i);
                    continue;
                }

                if (availableStringIndexList.Contains(i))
                    availableStringIndexList.Remove(i);
            }
        }

        if (availableStringIndexList.Any(index => dic[index].Split(spell, StringSplitOptions.RemoveEmptyEntries).Length == 0))
        {
            answer = 1;
        }


        return answer;
    }
}