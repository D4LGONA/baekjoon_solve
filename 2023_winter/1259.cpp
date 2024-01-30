#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	while (true)
	{
		cin >> n;
		if (n == "0") break;

		bool flag = true;
		int len = n.size();
		for (int i = 0; i < len / 2; ++i)
		{
			if (n[i] != n[len - i - 1])
			{
				flag = false;
				break;
			}
		}
		if (flag)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}