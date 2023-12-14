#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    
    map<char, int> map = {
        {'x', 0},
        {'i', 0}
    };
    
    while (polynomial.size() > 0)
    {
        auto pos = polynomial.find(" + ");
        if (pos == string::npos)
            break;
        
        string latex = polynomial.substr(0, pos);
        
        polynomial = polynomial.substr(pos + 3);
        // cout << latex << " | " << polynomial <<  endl;
        
        pos = latex.find('x');
        if (pos == string::npos)
        {
            // cout << latex << endl;
            map['i'] += stoi(latex);
        }
        else
        {
            latex.erase(pos);
            if (latex.size() == 0)
                latex = "1";
            // cout << latex << endl;
            map['x'] += stoi(latex);
        }
    }
        
    auto pos = polynomial.find('x');
    if (pos == string::npos)
    {
        map['i'] += stoi(polynomial);
    }
    else
    {
        polynomial.erase(pos);
        if (polynomial.size() == 0)
            polynomial = "1";
        
        map['x'] += stoi(polynomial);
    }

    if (map['x'] > 0)
    { 
        if (map['x'] != 1)
            answer += to_string(map['x']);
        answer += "x";
    }
    
    if (map['x'] > 0 && map['i'] != 0)
        answer += " + ";
    
    if (map['i'] != 0)
        answer += to_string(map['i']);
    
    return answer;
}