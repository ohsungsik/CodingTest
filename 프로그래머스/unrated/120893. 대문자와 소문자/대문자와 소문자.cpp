#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (char& c : my_string)
    {
        if (islower(c))
            c = toupper(c);
        else
            c = tolower(c);
    }
    answer = my_string;
    return answer;
}