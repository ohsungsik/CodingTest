#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    my_string.erase(remove_if(my_string.begin(), my_string.end(), [](char c) {
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
            default:
                return false;
        }
    }), my_string.end());
    answer = my_string;
    return answer;
}