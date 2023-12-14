#include <string>
#include <vector>

using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int solution(int n) {
    int answer = 0;
    
    while (true)
    {
        if (factorial(answer + 1) <= n)
        {
            answer += 1;
        }
        else
            break;;
    }
    
    return answer;
}