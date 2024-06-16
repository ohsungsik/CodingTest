
#include <array>
#include <iostream>

int main()
{
	int testCount = 0;
	std::wcin >> testCount;

	std::array<int, 41> fabonacci = { 0, 1 };
	for (size_t i = 2; i < fabonacci.size(); i++)
		fabonacci[i] = fabonacci[i - 1] + fabonacci[i - 2];

	while (testCount > 0)
	{
		int n = 0;
		std::wcin >> n;
		if (n == 0)
			std::wcout << fabonacci[1] << L" " << fabonacci[n] << L'\n';
		else
			std::wcout << fabonacci[n - 1] << L" " << fabonacci[n] << L'\n';

		testCount--;
	}

	return 0;
}