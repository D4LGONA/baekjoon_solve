#include <iostream>
#include <vector>
using namespace std;

vector<int> fibo;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i <= n; ++i) {
		if (i == 0) fibo.push_back(0);
		else if (i == 1) fibo.push_back(1);
		else fibo.push_back(fibo[i - 2] + fibo[i - 1]);
	}
	cout << fibo.back() << endl;
}