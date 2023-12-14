#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    
    int result = 0;
    for (int i = -1000; i <= total; i++)
    {
        for (int j = 0; j < num; j++)
        {
            result += i + j;
            answer.push_back(i + j);
        }
        
        if (result == total)
            break;
        
        answer = vector<int>();
        result = 0;
    }
    
    return answer;
}