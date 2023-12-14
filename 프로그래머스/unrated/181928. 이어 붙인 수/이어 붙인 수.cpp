#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int lhs = 0;
    int rhs = 0;
    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 == 0)
        {
            rhs = rhs * 10 + num_list[i];
        }
        else
        {
            lhs = lhs * 10 + num_list[i];
        }
    }
    answer = lhs + rhs;
    return answer;
}