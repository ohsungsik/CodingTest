#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    stack<int> stack;
    int i = 0;
    while (i <= ingredient.size() - 4 && ingredient.size() >= 4)
    {
        if (ingredient[i] == 1)
            stack.push(i);
        
        if (ingredient[i] == 1
           && ingredient[i + 1] == 2
           && ingredient[i + 2] == 3
           && ingredient[i + 3] == 1)
        {
            ingredient.erase(ingredient.begin() + i, ingredient.begin() + i + 4);
            answer++;
            
            stack.pop();

            if (stack.empty() == false)
            {
                i = stack.top();
                stack.pop();
            }
            
            continue;
        }
        
        i++;
    }
    
    return answer;
}