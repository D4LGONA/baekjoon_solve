#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;
	int time = 0;
	while (n > 0) {
		if (n < count + 1)
			count = 1;
		else
			++count;
		n -= count;
		time++;
	}
	cout << time;
}