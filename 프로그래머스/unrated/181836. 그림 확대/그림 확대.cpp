#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    
    for (int i = 0; i < picture.size(); i++)
    {
        for (int j = 0; j < k; j++)
        {
                string s;
                for (const auto& c : picture[i])
                {
                    for (int o = 0; o < k; o++)
                    {
                        s += c;   
                    }
                }
                answer.push_back(s);
        }
    }
    
    return answer;
}