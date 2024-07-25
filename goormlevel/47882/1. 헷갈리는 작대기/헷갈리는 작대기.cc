#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {
	
	string input;
	input.resize(5001);
	getline(cin, input);
	
	map<char, int> map;
	
	for (int i = 0; i  < input.size(); i++)
	{
		char t = input[i];
		if (t == '1'
			 || t == 'I'
			 || t == 'l'
			 || t == '|')
		{
			map[t]++;
		}
	}
	
	cout << map['1'] << endl
		<< map['I'] << endl
		<< map['l'] << endl
		<< map['|'];
	
	return 0;
}