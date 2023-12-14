#include <bits/stdc++.h>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
     for (int i = 1; i < food.size(); i++)
     {
         int j = food[i] / 2;
         while (j-- > 0)
         {
             answer += to_string(i);
         }
     }
    string reverseAnswer = answer;
    reverse(reverseAnswer.begin(), reverseAnswer.end());
    answer += "0";
    answer += reverseAnswer;
    
    return answer;
}