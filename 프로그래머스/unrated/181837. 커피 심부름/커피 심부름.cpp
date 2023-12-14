#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    
    const string cafelatte = "cafelatte";
    const string americano = "americano";
    
    map<string, int> map = {
        { "cafelatte", 5000 },
        { "americano", 4500 }
    };
    
    // 아메리카노, 라테 문자열 찾기
    
    for (string s : order)
    {
        size_t index = s.find(cafelatte);
        if (index != string::npos)
        {
            // 카페라떼라면
            s.erase(index, cafelatte.size());            
            answer += map[cafelatte];
            
            continue;
        }
        
        index = s.find(americano);
        if (index != string::npos)
        {
            // 아메리카노라면
            s.erase(index, americano.size());
            answer += map[americano];
            
            continue;
        }
        
        // if anything
        answer += map[americano];
    }
    
    // 찾은 문자열 제거
    // ice, hot 판별
    // 가격 측정
    
    return answer;
}