#include <algorithm>
#include <set>
#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    map<int, int> person;
    queue<int> firstPerson({1,2,3,4,5});
    queue<int> secondPerson({2,1,2,3,2,4,2,5});
    queue<int> thirdPerson({3,3,1,1,2,2,4,4,5,5});
    
    for (const int& answer : answers)
    {
        int check = firstPerson.front();
        firstPerson.pop();
        firstPerson.push(check);
        
        if (answer == check)
        {
            person[0]++;
        }
        
        check = secondPerson.front();
        secondPerson.pop();
        secondPerson.push(check);
        
        if (answer == check)
        {
            person[1]++;
        }
        
        check = thirdPerson.front();
        thirdPerson.pop();
        thirdPerson.push(check);
        
        if (answer == check)
        {
            person[2]++;
        }
    }
    
    map<int, vector<int>> correctMap;
    for (const auto& pair : person)
    {
        correctMap[pair.second].push_back(pair.first + 1);
    }
    
    answer = (--correctMap.end())->second;
    sort(answer.begin(), answer.end());
    
    return answer;
}