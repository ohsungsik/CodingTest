#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    const int size = my_string.length() + 1;
    char buffer[size];

    my_string.copy(buffer, my_string.length());
    overwrite_string.copy(buffer + s, overwrite_string.length());
    
    buffer[size - 1] = '\0';
    return string(buffer);
}