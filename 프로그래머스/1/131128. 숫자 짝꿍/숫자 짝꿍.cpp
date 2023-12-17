#include <bits/stdc++.h>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    int mapX[10] = {0, };
    for (size_t i = 0; i < X.size(); i++)
    {
        mapX[X[i] - '0']++;
    }   
    
    int mapY[10] = {0, };
    for (size_t i = 0; i < Y.size(); i++)
    {
        mapY[Y[i] - '0']++;
    }
    
    for (int i = 0; i < 10; i++)
    {
        if(mapX[i] > 0 && mapY[i] > 0)
        {
            int min = std::min(mapX[i], mapY[i]);
            answer.insert(0, min, i + '0');
        }
    }
    
    if (answer[0] == '0' && answer[answer.size() - 1] == '0')
        answer = "0";
    
    if (answer == "")
        answer = "-1";
    
    return answer;
}