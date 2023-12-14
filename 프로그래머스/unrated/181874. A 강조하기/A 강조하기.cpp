#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string myString) {
    string answer = "";
    std::for_each(myString.begin(), myString.end(), [](char& c) { 
        if (c == 'a')
            c = 'A';
        else if (isupper(c) && c != 'A')
            c = tolower(c);
    });
    answer = myString;
    return answer;
}