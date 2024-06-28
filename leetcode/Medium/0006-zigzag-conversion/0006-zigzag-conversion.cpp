#include <iostream>

class Solution {
public:
    string convert(string s, int numRows) {
        if (s.size() <= numRows || numRows == 1)
            return s;

        vector<string> rowStrings;
        rowStrings.resize(s.size());

        int j = 0;
        int direction = 1;
        for (int i = 0; i < s.size(); i++)
        {
            rowStrings[j] += s[i];
            j += direction;

            if (j <= 0 || j >= numRows - 1)
            {
                direction *= -1;
            }
        }

        string answer;
        for (const auto& rowString : rowStrings)
        {
            answer += rowString;
        }

        return answer;
    }
};