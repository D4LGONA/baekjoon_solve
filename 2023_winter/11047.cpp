#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> coins(n);

	for (int i = 0; i < n; ++i)
		cin >> coins[i];

	int count = 0;
	for (auto i = coins.rbegin(); i != coins.rend(); ++i) {
		if (k >= *i) {
			count += k / *i;
			k %= *i;
		}
	}
	cout << count << endl;
}