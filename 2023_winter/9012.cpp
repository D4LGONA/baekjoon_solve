#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string tmp;
		cin >> tmp;
		while (true) {
			auto idx = tmp.find("()"); // ��ġ�� �����ϴµ�
			if (idx == string::npos) break;
			tmp.erase(idx, 2);
		}
		if (tmp.size() == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}