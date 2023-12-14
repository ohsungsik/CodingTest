#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    
    const auto& size = to_string(num).size();
    int i = 0;
    while (num != 0)
    {
        int v = num % 10;
        num /= 10;
        
        if (v == k)
        {
            answer = size - i;
        }
        
        i++;
    }
    
    return answer;
}