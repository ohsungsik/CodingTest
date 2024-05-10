#include <cassert>
#include <cmath>
#include <iostream>

int main()
{
	int x1, x2;
	int y1, y2;

	int r1, r2;

	int testCase = 0;
	std::wcin >> testCase;

	while (testCase > 0)
	{
		std::wcin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		const double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		const double a = r1 + r2;
		const double b = abs(r1 - r2);

		int answer = 0;
		if (b < d && d < a)
			answer = 2;
		else if ((d == b && d != 0) || d == a)
			answer = 1;
		else if (d == b && b == 0)
			answer = -1;
		else if (d > a || d < b)
			answer = 0;
		else
			assert(false);

		std::wcout << answer << L'\n';

		testCase--;
	}

	return 0;
}