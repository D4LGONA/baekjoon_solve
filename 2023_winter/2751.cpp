#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	int n;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; ++i) {
		int t;
		cin >> t;
		s.insert(t);
	}

	for (const int& a : s)
		cout << a << '\n';
}