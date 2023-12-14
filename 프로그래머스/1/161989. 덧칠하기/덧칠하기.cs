using System.Collections.Generic;

public class Solution {
    public int solution(int n, int m, int[] section) {
        HashSet<int> unChecked = new HashSet<int>(section);

        int answer = 0;
        int reach = 0;

        for (int i = 0; i <= n; i++)
        {
            if (!unChecked.Contains(i) || i <= reach) continue;

            answer++;
            reach = m + i - 1;
        }

        return answer;
    }
}