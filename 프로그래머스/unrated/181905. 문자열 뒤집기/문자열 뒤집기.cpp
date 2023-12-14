#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    string subStr = my_string.substr(s, e - s + 1);
    
    reverse(subStr.begin(), subStr.end());
    
    my_string.erase(s, e - s + 1);
    // cout << my_string << endl;
    
    my_string.insert(s, subStr);
    
    // cout << subStr << endl;
    
    answer = my_string;
    return answer;
}