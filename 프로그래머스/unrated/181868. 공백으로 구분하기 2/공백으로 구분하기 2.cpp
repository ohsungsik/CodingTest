#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    istringstream iss(my_string.c_str());
      string s;
      while ( getline( iss, s, ' ' ) ) {
          if (s.size() > 0)
            answer.push_back(s);
      }
    
    return answer;
}