class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int answer = 0;
        answer += numBottles;

        int left = 0;
        while (numBottles >= numExchange)
        {
            int exchange = numBottles / numExchange;
            answer += exchange;
            
            left = numBottles % numExchange;
            numBottles = exchange + left;
        }

        return answer;
    }
};