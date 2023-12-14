#include <numeric>
#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

bool CanMove(string lhs, string rhs)
{
    int diff = 0;
    for (int i = 0; i < lhs.size(); i++)
    {
        if (lhs[i] != rhs[i])
        {
            diff++;
            if (diff > 1)
                return false;
        }
    }
    
    return true;
}
    

int GetCount(int count, const string& begin, const string& target, const vector<string>& words, map<string, bool> visit)
{
    int answer = 0;
    if (begin == target)
    {
        return count;
    }
        
    for (int i = 0; i < words.size(); i++)
    {
        if (begin == words[i])
            continue;
        
        if (CanMove(begin, words[i]) && visit[words[i]] == false)
        {
            visit[words[i]] = true;
            int result = GetCount(count + 1, words[i], target, words, visit);
            if (result != 0 && answer == 0)
            {
                answer = result;
            }
            else if (answer > result)
            {
                answer = result;
            }
        }
    }
    
    return answer;
}


int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    
    map<string, bool> visit;
    for (const string &word : words)
    {
        visit[word] = false;
    }
    
    answer = GetCount(0, begin, target, words, visit);
    
    return answer;
}