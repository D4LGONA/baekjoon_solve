#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;

int main()
{
	int arr[3] = { 1,2,3 };
	int T;
	cin >> T;
	for (int i = 0; i < T; ++i) {
		int n;
		cin >> n;
		dp.assign( n + 1, 0 );
		dp[0] = 1;
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;
		for (int i = 4; i <= n; ++i)
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		cout << dp.back() << endl;
	}
}
