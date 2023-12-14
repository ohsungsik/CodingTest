#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    int minX = 256;
    int minY = 256;
    int maxX = -256;
    int maxY = -256;
    
    for (int i = 0; i < dots.size(); i++)
    {
        if (minX > dots[i][0])
            minX = dots[i][0];
        
        if (minY > dots[i][1])
            minY = dots[i][1];
        
        if (maxX < dots[i][0])
            maxX = dots[i][0];
        
        if (maxY < dots[i][1])
            maxY = dots[i][1];
    }
    
    answer = (maxX - minX) * (maxY - minY);
    
    
    return answer;
}