#include <iostream>
using namespace std;

int main()
{
	unsigned long long dp[1001];
	for (int i = 0; i < 1001; ++i) {
		if (i == 0) dp[i] = 0;
		else if (i == 1) dp[i] = 1;
		else if (i == 2) dp[i] = 3;
		else dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
	}
	int n;
	cin >> n;

	cout << dp[n] << endl;
	
}


/*
1 - 1
2 - 3
3 - 5
4 - 11
5 - 21
*/