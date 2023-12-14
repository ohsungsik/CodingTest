#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    while (age != 0)
    {
        int value = age % 10;
        age /= 10;
        
        answer.insert(0, 1, 'a' + value);
    }
    return answer;
}