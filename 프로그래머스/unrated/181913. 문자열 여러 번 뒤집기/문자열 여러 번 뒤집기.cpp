#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    
    for (const vector<int>& query : queries)
    {
        string substr = my_string.substr(query[0], query[1] - query[0] + 1);
        reverse(substr.begin(), substr.end());
        
        my_string.erase(query[0], query[1] - query[0] + 1);
        my_string.insert(query[0], substr);
    }
    
    answer = my_string;
    
    return answer;
}