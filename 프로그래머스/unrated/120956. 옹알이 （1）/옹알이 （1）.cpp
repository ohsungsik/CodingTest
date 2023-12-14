#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    string words[] = {
      "aya",  
      "ye",
      "woo",
      "ma",
    };
    
    for (string babble : babbling)
    {
        bool speak[4] = {false, };
        bool doSomething = false;
        while (true)
        {
            doSomething = false;
            for (int i = 0; i < 4; i++)
            {
                size_t pos = babble.rfind(words[i], 0);
                if (pos != string::npos && speak[i] == false)
                {
                    babble.erase(pos, words[i].size());
                    speak[i] = true;
                    doSomething = true;
                }
            }
            
            if (doSomething == false)
                break;
        }
        
        // cout << babble << endl;
        
        if (babble.size() == 0)
            answer++;
    }
    
    return answer;
}