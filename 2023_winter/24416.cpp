#include <iostream>
#include <vector>
using namespace std;

int c1, c2;

int fibo(int n)
{
	if (n == 0) return 0;
	if (n == 1 or n == 2) {
		c1++;
		return 1;
	}
	else return fibo(n - 1) + fibo(n - 2);
}

int fibo_dp(int n)
{
	vector<int> dp(n + 1, 0);
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= n; ++i) {
		dp[i] = dp[i - 1] + dp[i - 2];
		c2++;
	}
	return dp[n];
}

int main()
{
	int n;
	cin >> n;
	fibo(n);
	fibo_dp(n);

	cout << c1 << " " << c2 << endl;
}