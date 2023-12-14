#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>

using namespace std;

// int solution(string word) {
//     int answer = 0;
//     const vector<char> c = { 'A', 'E', 'I', 'O', 'U' };

//     const vector<int> weight = { 781, 156, 31, 6, 1 };

//     for (int i = 0; i < word.size(); i++)
//     {
//         const char character = word[i];

//         const int idx = weight[i] * (find(c.cbegin(), c.cend(), character) - c.cbegin()) + 1;
//         answer += idx;
//     }

//     return answer;
// }

int solution(string word) {
	int answer = 0;

	map<char, int> c2i = {
		{'A', 0},
		{'E', 1},
		{'I', 2},
		{'O', 3},
		{'U', 4},
	};

	map<int, char> i2c = {
		{0, 'A'},
		{1, 'E'},
		{2, 'I'},
		{3, 'O'},
		{4, 'U'},
	};
	
	string target;

	while (true)
	{
		if (target.size() < 5)
		{
			target += "A";
			answer++;
		}
		else
		{
			while (c2i[target[target.size() - 1]] + 1 >= c2i.size())
			{
				target.erase(target.end() - 1);
			}
			target[target.size() - 1] = i2c[c2i[target[target.size() - 1]] + 1];
			answer++;
		}
		
		if (target == word)
			break;
	}

	return answer;
}