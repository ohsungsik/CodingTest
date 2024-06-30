class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        for (int i = 0; i < str.size() / 2; i++)
        {
            if (str[i] != *(str.end() - (i + 1)))
                return false;
        }

        return true;
    }
};