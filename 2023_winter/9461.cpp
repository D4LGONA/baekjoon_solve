#include <iostream>
using namespace std;

int main()
{
	unsigned long long dp[101];
	for (int i = 0; i < 101; ++i) {
		if (i == 0) dp[i] = 0;
		else if (i == 1) dp[i] = 1;
		else if (i == 2) dp[i] = 1;
		else if (i == 3) dp[i] = 1;
		else dp[i] = dp[i - 3] + dp[i - 2];
	}

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;

		cout << dp[n] << endl;
	}
}