#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for (int i = l; i <= r; i++)
    {
        int t = i;
        bool isValid = true;
        while (t > 0)
        {
            int q = t % 5;
            if (!(q == 0 || q == 5))
            {
                isValid = false;
                break;
            }
            
            t /= 10;
        }
        
        if (isValid)
            answer.push_back(i);
    }
    
    if (answer.size() == 0)
        answer.push_back(-1);
    
    return answer;
}