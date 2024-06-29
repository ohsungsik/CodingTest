class Solution {
public:
    int myAtoi(string s) {
        size_t begin = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                begin = i;
                break;
            }
        }

        bool isNegative = false;
        if (s[begin] == '-')
        {
            isNegative = true;
            begin++;
        }
        else if (s[begin] == '+')
        {
            begin++;
        }
        
        long ans = 0;
        while (begin < s.size()) {
            char c = s[begin];
            if (c < '0' || c > '9') {
                break;
            }

            int n = c - '0';
            if (ans > (INT_MAX - n) / 10) {
                return isNegative ? INT_MIN : INT_MAX;
            }

            ans = ans * 10 + n;
            begin++;
        }

        if (isNegative)
        {
            ans *= -1;
        }

        return ans;
    }
};