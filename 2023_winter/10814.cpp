#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<pair<int, string>> s;

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int k;
		string str;
		cin >> k >> str;
		s.emplace_back(make_pair(k, str));
	}

	stable_sort(s.begin(), s.end(), [](auto& a, auto& b) {return a.first < b.first; });

	for (auto& a : s)
		cout << a.first << " " << a.second << endl;
}