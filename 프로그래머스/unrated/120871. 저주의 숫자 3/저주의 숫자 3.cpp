#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int backN = n;
    
    while (n-- > 0)
    {
        answer++;
        
        string answerString = to_string(answer);
        auto it = answerString.find('3');
        while (it != string::npos || (answer > 2 && answer % 3 == 0))
        {
            answer++;
            
            answerString = to_string(answer);
            it = answerString.find('3');
        }
        
        // cout << backN - n << " " << answer << endl;
    }
    
    return answer;
}