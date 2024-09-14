#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int cnt = 0;
	string arr[]{ "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	while (s.size() != 0)
	{
		bool flag = true;
		for (int i = 0; i < 8; ++i) {
			string c = arr[i];
			if (s.find(c) != string::npos) {
				s.replace(s.find(c), c.size(), " ");
				++cnt;
				flag = false;
				--i;
			}
		}
		if (flag) break;
	}
	for (char& c : s)
		if (isalpha(c))
			cnt++;
	cout << cnt << endl;
}