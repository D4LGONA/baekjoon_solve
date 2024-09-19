#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> vec(n + 1, 0);
	for (int i = 1; i <= n; ++i) {
		int t;
		cin >> t;
		vec[i] = vec[i - 1] + t;
	}
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		cout << vec[b] - vec[a - 1] << '\n';
	}
}