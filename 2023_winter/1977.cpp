#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int m, n, min = 2147483647, sum = 0; // iNT_MAX가 없어서...

	cin >> m >> n;

	for (int i = m; i <= n; ++i)
	{
		if (sqrt(i) == floor(sqrt(i)))
		{
			if(min > i)
				min = i;
			sum += i;
		}
	}
	if (sum == 0)
		cout << -1 << endl;
	else
		cout << sum << endl << min;
}