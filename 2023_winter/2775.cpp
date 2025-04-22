#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<vector<int>> dp(15);
	for (int i = 0; i < 15; ++i) {
		dp[i] = vector<int>(15);
		dp[i][0] = 0;
		dp[i][1] = 1;
		if (i == 0) {
			for (int j = 0; j < 15; ++j)
				dp[0][j] = j;
		}
	}

	for (int i = 1; i < 15; ++i) {
		for (int j = 2; j < 15; ++j) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}

	for (int i = 0; i < n; ++i) {
		int k, t;
		cin >> k >> t;
		cout << dp[k][t] << endl;
	}
}
