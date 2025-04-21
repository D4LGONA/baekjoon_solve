#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int a;
	cin >> a;
	vector<vector<int>> vec(a);

	for (int i = 0; i < a; ++i) {
		for (int j = 0; j <= i; ++j) {
			int t;
			cin >> t;
			if (i == 0) vec[i].push_back(t);
			else {
				if (j == i) {
					vec[i].push_back(vec[i - 1][j - 1] + t);
				}
				else if (j == 0) {
					vec[i].push_back(vec[i - 1][j] + t);
				}
				else {
					int t1 = vec[i - 1][j - 1] + t;
					int t2 = vec[i - 1][j] + t;
					vec[i].push_back(max(t1, t2));
				}
			}
		}
	}

	auto k = max_element(vec.back().begin(), vec.back().end());
	cout << *k<< endl;;
}