#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (i == 0)
        {
            result.push_back(numbers[i]);
            result.push_back(numbers[i] * -1);
            continue;
        }
        
        int currentSize = result.size();
        
        for (int j = 0; j < currentSize; j++)
        {
            result.push_back(result[j] + numbers[i]);
            result.push_back(result[j] + numbers[i] * -1);
            
            if (i == numbers.size() - 1)
            {
                if (abs(result[result.size() - 1]) == target)
                {
                    answer++;
                }
            }
        }
        
        result.erase(result.begin(), result.begin() + currentSize);
    }
    
    return answer;
}