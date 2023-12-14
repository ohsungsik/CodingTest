#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    
    std::size_t found = myString.find_last_of(pat);
    answer = myString.substr(0,found + 1);
    
    return answer;
}