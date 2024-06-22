class Solution {
public:
    int reverse(int x) {
        long answer = 0;

        while (x != 0)
        {
            int p = x % 10;
            int q = x / 10;

            answer = answer * 10 + p;

            x = q;
        }

        if (answer > 2147483647 || answer < -2147483648)
        {
            answer = 0;
        }

        return (int)answer;
    }
};