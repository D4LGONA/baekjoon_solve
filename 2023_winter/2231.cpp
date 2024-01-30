#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string s = to_string(i);
		int sum = 0;
		for (char& c : s)
			sum += c - '0';
		if (sum + i == n)
		{
			cout << i << endl;
			break;
		}
		if (i == n - 1)
			cout << "0" << endl;
	}
}