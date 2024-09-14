#include <iostream>
using namespace std;

void f1(int n, string& s)
{
	string answer{ s };

	if (n == 2)
	{
		for (int i = 0; i < s.size(); ++i)
			if (answer[i] == '_') {
				answer[i + 1] = toupper(answer[i + 1]);
				answer.erase(answer.begin() + i);
			}
	}
	else
		answer[0] = tolower(answer[0]);

	cout << answer << endl;
}

void f2(int n, string& s)


int main()
{
	int n;
	string s;
	cin >> n >> s;
	switch (n)
	{
	case 1:
		break;

	case 2:
		break;

	case 3:
		break;
	}
}