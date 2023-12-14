#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    for (int i = 0; i < my_string.size(); i++)
    {
        if (find(indices.begin(), indices.end(), i) != indices.end())
            continue;
        
        answer += my_string[i];
    }
    return answer;
}