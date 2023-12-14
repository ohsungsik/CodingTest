#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for (size_t i = 0; i < str.length(); i++)
    {
        cout << str[i] << endl;
    }
    return 0;
}