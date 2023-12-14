#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for_each(my_string.begin(), my_string.end(), [](char& c) {
        c = tolower(c);
    });
    
    sort(my_string.begin(), my_string.end());
    
    answer = my_string;
    return answer;
}