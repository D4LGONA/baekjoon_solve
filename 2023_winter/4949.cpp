#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int main()
{
	vector<string> vec;
	while (true) {
		string s;
		std::getline(std::cin, s);
		if (s == ".") break;
		vec.push_back(s);
	}

	for (auto& a : vec) {
		stack<char> st;
		bool flag = true; // true일때 yes를 출력.
		for (auto& b : a) {
			if (b == '(' || b == '[') st.push(b);
			if (b == ')') {
				if (st.empty() || st.top() != '(') {
					flag = false;
					break;
				}
				else st.pop();
			}
			if (b == ']')
				if (st.empty() || st.top() != '[') {
					flag = false;
					break;
				}
				else st.pop();
		}
		if (flag && st.empty()) cout << "yes" << endl;
		else cout << "no" << endl;
	}

}