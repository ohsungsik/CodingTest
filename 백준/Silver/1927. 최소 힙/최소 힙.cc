#include <iostream>
#include <queue>
#include <vector>

int main() {
    unsigned int operationCount;
    std::scanf("%u", &operationCount);
    
    std::priority_queue<unsigned long long, std::vector<unsigned long long>, std::greater<unsigned long long>> xs;
    for (unsigned int i = 0; i < operationCount; ++i) 
    {
        unsigned int x;
        std::scanf("%u", &x);
        
        if (x == 0) 
        {
            if (xs.empty()) 
            {
                std::printf("0\n");
            } 
            else 
            {
                std::printf("%llu\n", xs.top());
                xs.pop();
            }
        } 
        else 
        {
            xs.push(x);
        }
    }
    
    return 0;
}
