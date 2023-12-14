#include <cmath>
#include <string>
#include <vector>
#include <set>

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

vector<int> solution(int n) {
    vector<int> answer;
    
    set<int> set;
    while (n > 1)
    {
        for (int i = 2;;i++)
        {
            if (IsPrime(i))
            {
                if (n % i == 0)
                {
                    set.insert(i);
                    n /= i;    
                    break;
                }
            }
        }
    }
    
  for (std::set<int>::iterator it=set.begin(); it!=set.end(); ++it)
        answer.push_back(*it);
    
    return answer;
}