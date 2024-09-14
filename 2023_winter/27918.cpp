#include <iostream>
using namespace std;

int main()
{
	int n;
	int a = 0, b = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		char tmp;
		cin >> tmp;
		if (tmp == 'D') ++a;
		else ++b;
		if (abs(b - a) >= 2) break;
	}
	cout << a << ":" << b;
}