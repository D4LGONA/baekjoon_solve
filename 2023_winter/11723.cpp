#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	set<int> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string tmp;
		cin >> tmp;
		if (tmp == "add") {
			int tint;
			cin >> tint;
			s.insert(tint);
		}
		else if (tmp == "remove") {
			int tint;
			cin >> tint;
			s.erase(tint);
		}
		else if (tmp == "check") {
			int tint;
			cin >> tint;
			if (s.count(tint) == 0) cout << 0 << '\n';
			else cout << 1 << '\n';
		}
		else if (tmp == "toggle") {
			int tint;
			cin >> tint;
			if (s.count(tint) == 0) s.insert(tint);
			else s.erase(tint);
		}
		else if (tmp == "all") {
			s = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
		}
		else
			s.clear();
	}
}