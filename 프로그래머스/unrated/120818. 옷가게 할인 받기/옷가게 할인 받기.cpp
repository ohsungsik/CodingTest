#include <cmath>
#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    
    int sale_ratio = 0;
    if (price >= 500000)
    {
        sale_ratio = 20;
    }
    else if (price >= 300000)
    {
        sale_ratio = 10;
    }
    else if (price >= 100000)
    {
        sale_ratio = 5;
    }
    
    answer = floor(price - (static_cast<float>(price) * sale_ratio / 100));
    
    return answer;
}