#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    do {
		vector<float> a = { dots[1][1] - dots[0][1] + 0.0f, dots[1][0] - dots[0][0]+ 0.0f };
        vector<float> b = { dots[3][1] - dots[2][1]+ 0.0f, dots[3][0] - dots[2][0]+ 0.0f };
        
        if (a[0] / b[0] == a[1] / b[1])
        {
            answer = 1;
            break;
        }
        
	} while (next_permutation(dots.begin(), dots.end()));
    
    return answer;
}