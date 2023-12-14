using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int[] d, int budget) {
        int answer = 0;
            
        Array.Sort(d);
        Queue<int> requestedMoneyQueue = new Queue<int>(d);

        while (budget > 0 && requestedMoneyQueue.Count > 0)
        {
            int money = requestedMoneyQueue.Dequeue();
            budget -= money;

            answer++;
        }

        if (budget < 0)
            answer--;

        return answer;
    }
}