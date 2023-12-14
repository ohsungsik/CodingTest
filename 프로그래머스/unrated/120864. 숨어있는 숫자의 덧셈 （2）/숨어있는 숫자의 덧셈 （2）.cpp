#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    while (my_string.size() > 0)
    {
        for (int i = 0;;i++)
        {
            if (isdigit(my_string[i]))
                continue;
            
            if (i != 0)
            {
                string s = my_string.substr(0, i);    
                cout << s << endl;
                answer += stoi(s);
                my_string.erase(0, i);
            }
            
            my_string.erase(0, 1);
            break;
        }
    }
        
    return answer;
}