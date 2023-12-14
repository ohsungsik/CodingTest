#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int target = brown + yellow;
    
    int width = 0;
    int height = 0;
    for (int w = 2; w < target; w++)
    {     
        if (target % w == 0 && w >= target / w)
        {
            int p = target / w;
            int requiredBrownCount = w * 2 + (p - 2) * 2;
            if (requiredBrownCount == brown)
            {
                width = w;
                height = target / w;
            }
        }
    }
    
    answer.push_back(width);
    answer.push_back(height);
    return answer;
}