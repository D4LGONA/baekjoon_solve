#include <iostream>
using namespace std;

int main()
{
	int n, k, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		if (k == 1) continue;
		bool flag = false;
		for (int j = 2; j < k; ++j)
		{
			if (k % j == 0)
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
			cnt++;
	}
	cout << cnt;
}