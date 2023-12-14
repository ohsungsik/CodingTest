#include <string>
#include <vector>

using namespace std;

__int128 factorial(__int128 n)
{
    if (n == 0 || n == 1)
        return 1;
    
    return n * factorial(n - 1);
}

__int128 solution(int balls, int share) {
    __int128 answer = factorial(balls) / (factorial(balls - share) * factorial(share));
    return answer;
}