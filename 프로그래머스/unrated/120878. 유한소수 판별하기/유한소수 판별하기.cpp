#include <string>
#include <vector>
#include <iostream>

using namespace std;

int GCD(int lhs, int rhs) 
{ 
	int mod = lhs % rhs;
    
	while (mod > 0)
	{
		lhs = rhs;
		rhs = mod;
		mod = lhs % rhs;
	}
	
    return rhs;
}

int solution(int a, int b) {
    int answer = 0;
    
    int gcd = GCD(a, b);
    a /= gcd;
    b /= gcd;
    
    while (true)
    {
        if (b % 2 != 0)
            break;
        
        b /= 2;
    }
    
    while (true)
    {
        if (b % 5 != 0)
            break;
        
        b /= 5;
    }
    
    answer = b == 1 ? 1 : 2;
    return answer;
}