#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int result{};
	string tmp = "";
	for (char& c : s)
	{
		if (c == ' ' and tmp.size() > 0)
		{
			result++;
			tmp = "";
		}
		else if (c != ' ')
			tmp += c;
	}
	if (s.back() != ' ') result++;
	cout << result;
}