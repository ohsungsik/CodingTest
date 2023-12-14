#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    
    vector<int> first = vector<int>(num_list.begin() + n, num_list.end());
    vector<int> last = vector<int>(num_list.begin(), num_list.begin() + n);
    
    answer.insert(answer.end(), first.begin(), first.end());
    answer.insert(answer.end(), last.begin(), last.end());
    
    return answer;
}