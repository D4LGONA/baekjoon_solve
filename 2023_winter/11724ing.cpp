#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<pair<int, int>> p;
int n, m;
void set_parent(int in1, int in2)
{
	vector<pair<int, int>> vec;
	int target = max(in1, in2);
	p[target - 1].second = min(in1, in2); // 부모수정
	auto cur = p[target - 1];
	while (true) {
		if (cur.first == cur.second) {
			if (p[target - 1].second < cur.second)
				cur.second = p[target - 1].second;
			break;
		}
		vec.push_back(cur);
		cur = p[cur.second - 1];
	}
	for (auto& a : vec)
		p[a.first - 1].second = cur.second;
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		p.push_back({ i + 1, i + 1 });
	}
	for (int i = 0; i < m; ++i) {
		int tmpa, tmpb;
		cin >> tmpa >> tmpb;
		set_parent(tmpa, tmpb);
	}
	set<int> s;
	transform(p.begin(), p.end(), std::inserter(s, s.end()), [](const std::pair<int, int>& pair) {
		return pair.second;  
		});
	cout << s.size() << endl;
}