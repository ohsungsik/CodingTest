using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int[] numbers) {
        HashSet<int> collection = new HashSet<int>(numbers);
        int answer = 0;
        
        for (int i = 0; i <= 9; i++)
        {
            if (!collection.Contains(i))
                answer += i;
        }
        
        return answer;
    }
}