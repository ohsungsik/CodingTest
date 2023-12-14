#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string a_str = to_string(a);
    string b_str = to_string(b);
    
    string lhs_string = a_str + b_str;
    string rhs_string = b_str + a_str;
    
    int lhs = stoi(lhs_string);
    int rhs = stoi(rhs_string);
    
    answer = lhs > rhs ? lhs : rhs; 
    
    return answer;
}