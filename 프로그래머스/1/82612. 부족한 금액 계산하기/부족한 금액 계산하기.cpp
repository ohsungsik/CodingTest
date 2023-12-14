using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    int left = 1;
    
    while (left <= count)
    {
        answer += price * left;
        
        left++;
    }
    
    answer -= money;
    
    if (answer < 0)
        answer = 0;

    return answer;
}