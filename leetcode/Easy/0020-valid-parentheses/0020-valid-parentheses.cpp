class Solution {
public:
bool isValid(string s) {
    std::stack<char> stack;
    std::unordered_map<char, char> matchingBrackets = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    for (char ch : s) {
        // If the character is a closing bracket
        if (matchingBrackets.count(ch)) {
            // If the stack is empty or the top of the stack is not the matching opening bracket
            if (stack.empty() || stack.top() != matchingBrackets[ch]) {
                return false;
            }
            // Otherwise, pop the opening bracket from the stack
            stack.pop();
        } else {
            // If the character is an opening bracket, push it onto the stack
            stack.push(ch);
        }
    }

    // If the stack is empty, all brackets were matched correctly
    return stack.empty();
}
};