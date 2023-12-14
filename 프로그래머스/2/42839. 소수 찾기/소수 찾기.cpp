#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

bool IsPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) 
    {
		if (n%i == 0) 
        {
            return false;
		}
	}
    
	return true;
}

int solution(string numbers) {
    int answer = 0;
    
    vector<int> v;
    
    for (int i = 0; i < numbers.size(); i++)
    {
        v.push_back(numbers[i] - '0');
    }
    sort(v.begin(), v.end());
    
    vector<int> ans;
    do 
    {
        int temp = 0;
        for (int i = 0; i < v.size(); i++)
        {
            temp = temp * 10 + v[i];
            ans.push_back(temp);
        }
    } while(next_permutation(v.begin(), v.end()));
    
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
        
    //cout << "Set size : " << ans.size() << endl;
    
    for (const int& value : ans)
    {
        //cout << value << endl;
        
        if (value < 2)
            continue;
        
        if (IsPrime(value))
            answer++;
    }
    
    return answer;
}