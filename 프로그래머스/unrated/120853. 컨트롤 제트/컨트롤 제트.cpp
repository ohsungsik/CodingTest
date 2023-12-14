#include <cctype>
#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<string> SplitByDelimiter(string origin, string delimiter)
{
	vector<string> words;
	size_t pos = 0;
	while ((pos = origin.find(delimiter)) != string::npos) {
		string sub = origin.substr(0, pos);
		words.emplace_back(sub);
		origin.erase(0, pos + 1);
	}
	words.emplace_back(origin);
    
    return words;
}

int solution(string s) {
    int answer = 0;
    
    const vector<string>& split = SplitByDelimiter(s, " ");
    
    stack<int> stack;
    for (const string& s : split)
    {
        if (s != "Z")
        {
            stack.push(stoi(s));
        }
       else
       {
           stack.pop();
       }
    }
                       
   while (stack.size() > 0)
   {
       int v = stack.top();
       answer += v;
       stack.pop();
   }
    
    return answer;
}