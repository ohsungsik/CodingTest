#include <string>
#include <map>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    map<int, int> map;
    
    for (const vector<int>& line : lines)
    {
        for (float f = line[0] * 10 + 1; f < line[1] * 10; f += 1)
        {
            map[f]++;
        }
    }
    
    float start = -1000;
    float end = -1000;
    for (const pair<int, int>& pair : map)
    {
        // cout << pair.first << " " << pair.second << endl;
        if (pair.second >= 2)
        {
            if (start == -1000)
            {
                start = pair.first;
                // cout << "new start: " << start << endl;
            }
            else
            {
                end = pair.first;
                // cout << "new end: " << end << endl;
            }
        }
        else
        {
            if (start != -1000 && end != -1000)
            {
                float length = (end - start + 2) / 10;
                // cout << end << " " << start << endl;
                answer += length;    
                
                start = -1000;
                end = -1000;
            }
        }
    }
    
    // cout << start << " " << end << endl;
    
    if (start != 1000 && end != 1000)
    {
        float length = (end - start + 2) / 10;
        // cout << end << " " << start << endl;
        answer += length;  
    }
    
    return answer;
}