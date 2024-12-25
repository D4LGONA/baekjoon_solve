#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(NULL);

	unordered_map<int, int> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int k;
		cin >> k;
		m[k]++;
	}

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int k;
		cin >> k;
		if (m.count(k) == 0) cout << 0 << " ";
		else cout << m[k] << " ";
	}
}