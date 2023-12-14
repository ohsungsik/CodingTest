#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    std::for_each(myString.begin(), myString.end(), [](char& c){
       if (c == 'A')
           c = 'B';
        else
            c = 'A';
    });
    
    const auto& idx = myString.find(pat);
    answer = idx != string::npos ? 1 : 0;
    
    return answer;
}