#include <iostream>	
#include <vector>
#include <math.h>
#include <climits>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>dp(n + 1, INT_MAX);
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i < n + 1; ++i) {
		if (int(sqrt(i)) == sqrt(i)) dp[i] = 1;
		else {
			for (int j = 1; j * j <= i; ++j) {
				dp[i] = min(dp[i], dp[i - j * j] + 1);
			}
		}
	}
	cout << dp[n];
}