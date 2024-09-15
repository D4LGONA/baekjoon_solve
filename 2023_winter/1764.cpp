#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	set<string> s1;
	set<string> s2;
	for (int i = 0; i < n; ++i) {
		string tmp;
		cin >> tmp;
		s1.insert(tmp);
	}
	for (int i = 0; i < m; ++i) {
		string tmp;
		cin >> tmp;
		s2.insert(tmp);
	}
	set<string> result;
	set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(result, result.begin()));

	cout << result.size() << endl;
	for (auto& a : result)
		cout << a << endl;
}