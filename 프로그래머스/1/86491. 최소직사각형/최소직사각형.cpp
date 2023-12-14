#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    int width = sizes[0][0];
    int height = sizes[0][1];
    
    for (const vector<int>& size : sizes)
    {   
        // storeable
        if ((width >= size[0] && height >= size[1]) ||
            (width >= size[1] && height >= size[0]))
            continue;
        
        // or not
        bool shouldRotate = abs((width - size[0])) + abs((height - size[1])) < 
                            abs((height - size[0])) + abs((width - size[1])) ? false : true;
        
        // cout << "size " << size[0] << " " << size[1] << " should roate " << shouldRotate << endl;
        
        if (shouldRotate == true)
        {
            if (width < size[1])
                width = size[1];
            
            if (height < size[0])
                height = size[0];
        }
        else
        {
            if (width < size[0])
                width = size[0];
            
            if (height < size[1])
                height = size[1];
        }
        
        // cout << "width " << width << " height " << height << endl;
    }
    
    answer = width * height;
    
    return answer;
}