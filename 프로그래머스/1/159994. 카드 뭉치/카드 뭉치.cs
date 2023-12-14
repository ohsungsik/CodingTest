using System.Collections.Generic;

public class Solution {
    public string solution(string[] cards1, string[] cards2, string[] goal) {
        string answer = "Yes";

        Queue<string> card1Queue = new Queue<string>(cards1);
        Queue<string> card2Queue = new Queue<string>(cards2);
        Queue<string> goalQueue = new Queue<string>(goal);

        while (goalQueue.Count > 0)
        {
            string goalWord = goalQueue.Dequeue();


            if (card1Queue.Count > 0)
            {
                string card1Word = card1Queue.Peek();
                if (goalWord.Equals(card1Word))
                {
                    card1Queue.Dequeue();
                    continue;
                }
            }


            if (card2Queue.Count > 0)
            {
                string card2Word = card2Queue.Peek();
                if (goalWord.Equals(card2Word))
                {
                    card2Queue.Dequeue();
                    continue;
                }
            }

            answer = "No";
            break;
        }
        return answer;
    }
}