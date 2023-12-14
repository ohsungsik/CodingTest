#include <bits/stdc++.h>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    queue<char> lowerQueue;
    for (char c = 'a'; c <= 'z'; c++)
    {
        lowerQueue.push(c);
    }
    
    queue<char> upperQueue;
    for (char c = 'A'; c <= 'Z'; c++)
    {
        upperQueue.push(c);
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            queue<char> lowerQueueTemp = lowerQueue;
            while (lowerQueueTemp.front() != s[i])
            {
                char c = lowerQueueTemp.front();
                lowerQueueTemp.pop();
                lowerQueueTemp.push(c);
            }           
            
            for (int i = 0; i < n; i++)
            {
                char c = lowerQueueTemp.front();
                lowerQueueTemp.pop();
                lowerQueueTemp.push(c);
            }
            answer += lowerQueueTemp.front();
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            queue<char> upperQueueTemp = upperQueue;
            
            while (upperQueueTemp.front() != s[i])
            {
                char c = upperQueueTemp.front();
                upperQueueTemp.pop();
                upperQueueTemp.push(c);
            }
            
            for (int i = 0; i < n; i++)
            {
                char c = upperQueueTemp.front();
                upperQueueTemp.pop();
                upperQueueTemp.push(c);
            }
            answer += upperQueueTemp.front();
        }
        else
            answer += s[i];
    }
    
    return answer;
}