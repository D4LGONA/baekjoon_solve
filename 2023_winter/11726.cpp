#include <iostream>
using namespace std;

int main()
{
	unsigned long long dp[1001];
	for (int i = 0; i < 1001; ++i) {
		if (i == 0) dp[i] = 1;
		else if (i == 1) dp[i] = 1;
		else dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}
	
	dp[0] = 0;

	int n;
	cin >> n;

	cout << dp[n] ;
}

/*
1 - 1
2 - 2
3 - 3
4 - 5
5 - 8 (

*/