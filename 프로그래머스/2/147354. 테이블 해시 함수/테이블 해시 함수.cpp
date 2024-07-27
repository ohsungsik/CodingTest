#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> data, int col, int row_begin, int row_end) {
    
    int answer = 0;
    
    sort(data.begin(), data.end(), [col](vector<int>& lhs, vector<int>& rhs) {
        int idx = col - 1;
        if (lhs[idx] == rhs[idx])
            return lhs[0] > rhs[0];
        else
            return lhs[idx] < rhs[idx];
    });
    
    for (int i = row_begin - 1; i < row_end; i++) {
        int mod = 0;
        for (int j = 0; j < data[i].size(); j++)
        {
            mod += data[i][j] % (i + 1);
        }
        
        answer ^= mod;
    }
    
    return answer;
}