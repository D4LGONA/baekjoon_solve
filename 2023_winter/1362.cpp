#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> isHappy;

	char a;
	int b;
	int o, w;
	while (true)
	{
		cin >> o >> w;
		if (o == w && 0 == o)
			break;
		while (true)
		{
			cin >> a >> b;
			if (a == '#' && b == 0)
				break;

			if (0 >= w)
				continue;

			if (a == 'F')
				w += b;
			else if (a == 'E')
				w -= b;
		}
		if (0 >= w)
			isHappy.push_back(-1);
		else if (w > o * 0.5f && w < o * 2)
			isHappy.push_back(0);
		else
			isHappy.push_back(1);
	}

	for (int i = 0; i < isHappy.size(); ++i)
	{
		if (isHappy[i] == -1)
			cout << i + 1 << " RIP" << endl;
		else if (isHappy[i] == 0)
			cout << i + 1 << " :-)" << endl;
		else
			cout << i + 1 << " :-(" << endl;
	}
}