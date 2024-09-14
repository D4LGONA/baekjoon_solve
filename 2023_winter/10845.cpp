#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	cin >> n;
	queue<int> q;

	for (int i = 0; i < n; ++i) {
		string tmp;
		cin >> tmp;
		if (tmp == "push") {
			int tmpint;
			cin >> tmpint;
			q.push(tmpint);
		}
		else if (tmp == "pop") {
			if (q.empty()) cout << "-1" << endl;
			else {
				int n = q.front();
				cout << n << endl;
				q.pop();
			}
		}
		else if (tmp == "size") {
			cout << q.size() << endl;
		}
		else if (tmp == "empty") {
			if (q.empty()) cout << "1" << endl;
			else cout << "0" << endl;
		}
		else if (tmp == "front") {
			if (q.empty()) cout << "-1" << endl;
			else cout << q.front() << endl;
		}
		else {
			if (q.empty()) cout << "-1" << endl;
			else cout << q.back() << endl;
		}
	}
}