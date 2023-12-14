#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for (string formular : quiz)
    {
        size_t pos = formular.find('=');
    
        string leftFormu = formular.substr(0, pos - 1);
        string rightFormu = formular.substr(pos + 1);
        
        bool isAdd = true;
        pos = leftFormu.find('+', 1);
        if (leftFormu.find('+') == string::npos)
        {
            pos = leftFormu.find('-', 1);
            isAdd = false;
        }            
        
        int leftFormuLhs = stoi(leftFormu.substr(0, pos - 1));
        int leftFormuRhs = stoi(leftFormu.substr(pos + 1));
        
        int rhs = stoi(rightFormu);

        // cout << leftFormuLhs << endl;
        // cout << leftFormuRhs << endl;
        // cout << rhs << endl;
        
        if (isAdd == true)
        {
            answer.push_back(leftFormuLhs + leftFormuRhs == rhs ? "O" : "X");
        }
        else
        {
            answer.push_back(leftFormuLhs - leftFormuRhs == rhs ? "O" : "X");
        }
    }
    
    return answer;
}