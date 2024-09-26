#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);  
	cout.tie(nullptr);

	int n;
	cin >> n;
	unordered_map<int, bool> m;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		m[tmp] = true;
	}

	int a;
	cin >> a;
	for (int i = 0; i < a; ++i) {
		int t;
		cin >> t;
		cout << m[t] << " ";
	}
}