#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 마이너스 뒤에 있는 애들 최대한 묶기.
int main()
{
	vector<int> nums;
	vector<char> ops;

	string s;
	cin >> s;
	string tmp;

	bool add = false;
	int tmpnum = 0;
	for (auto& c : s) {

		if (isdigit(c)) // c가 숫자이면
			tmp += c;
		else {
			if (c == '+') // 더하기일 때: 그냥 더해서 넣기
				tmpnum += stoi(tmp);
			else
			{
				tmpnum += stoi(tmp);
				ops.push_back(c);
				nums.push_back(tmpnum);
				tmpnum = 0;
			}
			tmp = "";
		}
	}
	nums.push_back(tmpnum + stoi(tmp));

	int res = nums[0];
	for (int i = 1; i < nums.size(); ++i) {
		res -= nums[i];
	}
	cout << res << endl;
}