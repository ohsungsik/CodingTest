#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <iostream>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    
    queue<int> top;
    for (int i = bin1.size() - 1; i >= 0; i--)
    {
        top.push(bin1[i] - '0');
        // cout << top.back() << endl;
    }
    
    // cout << endl;
    
    queue<int> bottom;
    for (int i = bin2.size() - 1; i >= 0; i--)
    {
        bottom.push(bin2[i] - '0');
        // cout << bottom.back() << endl;
    }
    
    stack<int> stack;
    int carry = 0;
    while (bottom.size() > 0 || top.size() > 0)
    {
        int topV = 0;
        if (top.size() > 0)
        {
            topV = top.front();
            top.pop();    
        }
        
        int bottomV = 0;
        if (bottom.size() > 0)
        {
            bottomV = bottom.front();
            bottom.pop();    
        }
        
        int temp = carry + topV + bottomV;
        
        if (temp >= 2)
        {
            carry = 1;
            if (temp == 2)
                temp = 0;
            else
                temp = 1;
                
        }
        else
        {
            carry = 0;
        }
        
        stack.push(temp);
    }
    if (carry != 0)
        stack.push(carry);
    
    while (stack.size() > 0)
    {
        int value = stack.top();
        stack.pop();
        
        answer += to_string(value);
    }
    
    return answer;
}