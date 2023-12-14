#include <vector>

using namespace std;

int GCD(int a, int b) 
{
	while (b != 0) {
		const int n = a % b;
		a = b;
		b = n;
	}

	return a;
}

int LCM(int a, int b, int gcd) 
{
	return a * b / gcd;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int gcd = GCD(n, m);
    answer.push_back(gcd);
    answer.push_back(LCM(n, m, gcd));
    
    return answer;
}