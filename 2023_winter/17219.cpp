#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(NULL);

	int n, m;
	cin >> n >> m;
	unordered_map<string, string> map;
	string s1, s2;
	for (int i = 0; i < n; ++i) {
		cin >> s1 >> s2;
		map[s1] = s2;
	}

	for (int i = 0; i < m; ++i) {
		cin >> s1;
		cout << map[s1] << endl;
	}
}