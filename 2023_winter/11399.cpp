#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> vec(n);
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		vec[i] = { i + 1, tmp }; // first번째 사람이 second의 시간
	}

	sort(vec.begin(), vec.end(), [](pair<int, int>& a, pair<int, int>& b) {
		return a.second < b.second;
		});
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += vec[i].second * (n - i);
	}
	cout << sum << endl;
}