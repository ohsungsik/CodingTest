#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    
    bool isAP = true;
    int diff =  common[1] - common[0];
    for (int i = 2; i <= common.size() - 1; i++)
    {
        if (diff != common[i] - common[i - 1])
        {
            isAP = false;
            break; 
        }
    }
    
    if (isAP == true)
    {
        answer = common[common.size() - 1] + diff;
    }
    else
    {
        diff = common[1] / common[0];
        answer = common[common.size() - 1] * diff;
    }
    
    return answer;
}