#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    vector<string> speakable = {
        "aya",
        "ye",
        "woo",
        "ma"
    };
    
    for (string babble : babbling)
    {
        string last = "";
        // cout << "----------------" << endl;
        while (babble.size() > 0)
        {
            bool find = false;
            for (int i = 0; i < speakable.size(); i++)
            {
                size_t idx = babble.find(speakable[i]);
                if (idx == 0 && speakable[i] != last)
                {
                    // cout << speakable[i].size() << " " << babble;
                    babble.erase(0, speakable[i].size());
                    // cout << " - " << speakable[i] << " : " << babble << endl;
                    find = true;
                    last = speakable[i];
                }
            }
            
            if (find == false)
                break;
        }
        
        if (babble.size() == 0)
        {
            answer++;
        }
    }
    
    return answer;
}