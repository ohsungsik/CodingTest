#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    int lhs = 1;
    int rhs = 0;
    
    for (const int& num : num_list)
    {
        lhs *= num;
        rhs += num;
    }
    
    rhs *= rhs;
    
    answer = lhs < rhs ? 1 : 0;
    
    return answer;
}