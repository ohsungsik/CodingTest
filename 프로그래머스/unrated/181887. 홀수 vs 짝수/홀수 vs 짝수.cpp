#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    int lhs;
    int rhs;
    
    for (int i = 0; i < num_list.size(); i++)
    {
        if (i % 2 == 0)
        {
            lhs += num_list[i];
        }
        else
        {
            rhs += num_list[i];
        }
    }
    
    answer = lhs > rhs ? lhs : rhs;
    
    return answer;
}