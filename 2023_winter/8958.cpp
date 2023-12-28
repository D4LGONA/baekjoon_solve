#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	vector<int> results;
	for (int i = 0; i < n; ++i)
	{
		int cnt = 0;
		results.push_back(0);
		cin >> s;
		for (char& c : s)
		{
			if (c == 'O')
				cnt++;
			else
				cnt = 0;
			results[i] += cnt;
		}
	}

	for (int& k : results)
		cout << k << endl;
}