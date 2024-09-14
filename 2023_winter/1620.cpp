#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;
	unordered_map<string, int> m;
	vector<string> v;
	for (int i = 0; i < a; ++i) {
		string tmp;
		cin >> tmp;
		m[tmp] = i + 1;
		v.push_back(tmp);
	}
	for (int i = 0; i < b; ++i) {
		string tmp;
		cin >> tmp;
		if (isalpha(tmp[0])) {
			cout << m[tmp] << '\n';
		}
		else {
			cout << v[stoi(tmp) - 1] << '\n';
		}
	}
}