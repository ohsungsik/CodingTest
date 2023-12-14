#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string letter) {
    string answer = "";
    
    vector<string> s = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    istringstream iss(letter);
    string sSplit;
    while (getline(iss, sSplit, ' ' )) {
        const auto index = find(s.begin(), s.end(), sSplit) - s.begin();
        // cout << sSplit << " " << index << endl;
        answer += 'a' + index;
    }
    
    return answer;
}