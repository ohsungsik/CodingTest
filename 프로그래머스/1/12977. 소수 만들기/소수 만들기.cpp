#include <bits/stdc++.h>

using namespace std;

bool IsPrime(const int& n) 
{
	for (int i = 2; i <= sqrt(n); i++) 
	{
		if (n % i == 0) {
			return false;
		}
	}
	
	return true;
}

int solution(vector<int> nums) {
    int answer = 0;

    for (int i = 0; i < nums.size() - 2; i++)
    {
        for (int j = i + 1; j < nums.size() - 1; j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                int value = nums[i] + nums[j] + nums[k];
                bool isPrime = IsPrime(value);
                if (isPrime == true)
                    answer++;
            }
        }
    }
    return answer;
}