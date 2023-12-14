#include <string>
#include <vector>

using namespace std;



void Hanoi(vector<vector<int>>& answer, int n, int start, int to, int layover)
{
    if (n == 1)
    {
        // move(1, start, to)
        answer.push_back(vector<int> {start + 1, to + 1});
    }
    else
    {
        Hanoi(answer, n-1, start, layover, to);
        answer.push_back(vector<int> {start + 1, to + 1});
        Hanoi(answer, n-1, layover, to, start);
    }
        
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    Hanoi(answer, n, 0, 2, 1);  
    return answer;
}