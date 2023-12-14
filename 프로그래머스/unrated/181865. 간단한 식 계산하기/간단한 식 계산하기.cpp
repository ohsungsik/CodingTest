#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    
    vector<string> v;
    size_t pos = 0;
    while ((pos = binomial.find(' ')) != string::npos) {
        v.push_back(binomial.substr(0, pos));
        binomial.erase(0, pos + 1);
    }
    v.push_back(binomial);
    
    // cout << v.size() << endl;
    // cout << v[0] << " " << v[1] << " " << v[2] << endl;
    
    int lhs = stoi(v[0]);
    int rhs = stoi(v[2]);
    
    if(v[1] == "+")
    {
        answer = lhs + rhs;
    }
    else if (v[1] == "-")
    {
        answer = lhs - rhs;
    }
    else
    {
        answer = lhs * rhs;   
    }
    
    return answer;
}