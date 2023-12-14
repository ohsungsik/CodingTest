#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for (int value : array)
    {
        while (value != 0)
        {
            int v = value % 10;
            value /= 10;
            
            if (v == 7)
                answer++;
        }
    }
    
    return answer;
}