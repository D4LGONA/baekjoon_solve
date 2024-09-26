#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;
	map<char, int> vec;
	for (char c : s) {
		vec[c]++;
	}
	
	int cnt = 0;
	char ch;
	string str = "";
	for (auto& p : vec) {
		if (p.second % 2 != 0) {
			ch = p.first;
			cnt++;
		}
		for (int i = 0; i < p.second / 2; ++i)
			str += p.first;
	}

	if (cnt <= 1){
		string rstr = str;
		reverse(rstr.begin(), rstr.end());
		if (cnt == 1)
			str += ch;
		cout << str + rstr;
	}
	else
		cout << "I'm Sorry Hansoo";
}