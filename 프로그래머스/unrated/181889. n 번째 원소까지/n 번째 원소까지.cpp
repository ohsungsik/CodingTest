#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    while (answer.size() < n)
    {
        answer.push_back(num_list[answer.size()]);
    }
    return answer;
}