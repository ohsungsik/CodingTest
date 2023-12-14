#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    
    sort(dungeons.begin(), dungeons.end());
    
    do 
    {
        int health = k;
        int count = 0;
        for (vector<int> dungeon : dungeons)
        {
            //cout << dungeon[0] << " " << dungeon[1] << endl;
            
            if (health < dungeon[0])
                break;
            
            if (health - dungeon[1] < 0)
                break;
            
            health -= dungeon[1];
            count++;
        }
        
        if (count > answer)
            answer = count;
        
        //cout << endl;
        
    }while (next_permutation(dungeons.begin(), dungeons.end()));
    
    return answer;
}