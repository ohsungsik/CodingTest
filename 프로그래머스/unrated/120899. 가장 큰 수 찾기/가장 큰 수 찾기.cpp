#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    
    vector<int> arrayTemp = array;
    sort (arrayTemp.begin(), arrayTemp.end(), greater<int>());
    
    const int maxValue = arrayTemp[0];
    answer.emplace_back(maxValue);
    
    const int idx = find(array.begin(), array.end(), maxValue) - array.begin();
    answer.emplace_back(idx);
    
    return answer;
}