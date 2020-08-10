//version cpp

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int spec_sum(int a, int count, int sum)
{
	int idx;

	if (count == 0)
		return sum;
	else
	{
		sum += a * pow(10, count - 1);
		cout << pow(10, count) << endl;
		return spec_sum(a, count - 1, sum);
	}
}

int		main(void)
{
	int a;
	int result;

	result = 0;
	cin >> a;
	result = spec_sum(a, 4, result);
	cout << result;
	return (0);
}
