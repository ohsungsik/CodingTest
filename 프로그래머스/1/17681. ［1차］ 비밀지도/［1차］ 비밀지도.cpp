#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    vector<string> arr1String;
    for (int v : arr1)
    {
        string s = "";
        while (v > 0)
        {
            int q = v % 2;
            s.insert(0, to_string(q));
            v /= 2;
        }
        
        while (s.size() < n)
        {
            s.insert(0, "0");
        }
        
        arr1String.push_back(s);        
    }
    
    vector<string> arr2String;
    for (int v : arr2)
    {
        string s = "";
        while (v > 0)
        {
            int q = v % 2;
            s.insert(0, to_string(q));
            v /= 2;
        }
        
        while (s.size() < n)
        {
            s.insert(0, "0");
        }
        
        arr2String.push_back(s);
    }
    
    for (int i = 0; i < arr1String.size(); i++)
    {
        string s = "";
        for (int j = 0; j < arr1String[i].size(); j++)
        {
            int lhs = arr1String[i][j] - '0';
            int rhs = arr2String[i][j] - '0';
            
            int result = lhs | rhs;
            
            s += result == 1 ? "#" : " ";
        }
        
        answer.push_back(s);
    }
    
    return answer;
}