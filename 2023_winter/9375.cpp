#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int k;
		cin >> k;
		unordered_map<string, vector<string>> map;
		
		// 입력받기
		for (int j = 0; j < k; ++j) {
			string t1, t2;
			cin >> t1 >> t2;
			map[t2].push_back(t1);
		}

		// 계산하기
		int sum = 1;
		for (auto& t : map)
			sum *= t.second.size() + 1;
		sum--;
		cout << sum << endl;
	}
}