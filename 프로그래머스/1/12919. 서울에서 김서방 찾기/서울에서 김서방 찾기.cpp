#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    const int dis = distance(seoul.begin(), find(seoul.begin(), seoul.end(), "Kim"));
    
    answer = "김서방은 " + to_string(dis) + "에 있다";
    
    return answer;
}