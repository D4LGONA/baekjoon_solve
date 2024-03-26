#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> v(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	set<string> s{ v.begin(), v.end() };
	vector<string> v2{ s.begin(), s.end() };

	std::sort(v2.begin(), v2.end(), [](const string& a, const string& b) {
		if (a.size() == b.size())
			return a < b;
		return a.size() < b.size();
		});

	for (string& s : v2)
		cout << s << endl;
}