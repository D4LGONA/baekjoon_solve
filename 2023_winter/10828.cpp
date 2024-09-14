#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin >> n;
	stack<int> st;

	for (int i = 0; i < n; ++i) {
		string tmp;
		cin >> tmp;
		if (tmp == "push") {
			int tmpint;
			cin >> tmpint;
			st.push(tmpint);
		}
		else if (tmp == "pop") {
			if (st.empty()) cout << "-1" << endl;
			else {
				int n = st.top();
				cout << n << endl;
				st.pop();
			}
		}
		else if (tmp == "size") {
			cout << st.size() << endl;
		}
		else if (tmp == "empty") {
			if (st.empty()) cout << "1" << endl;
			else cout << "0" << endl;
		}
		else {
			if (st.empty()) cout << "-1" << endl;
			else cout << st.top() << endl;
		}
	}
}