#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dfs(int x, int y, vector<string>& vec, vector<vector<bool>>& visited, int& count)
{
	int n = vec.size();
	if (x < 0 || x >= n || y < 0 || y >= n) return 0;
	if (vec[x][y] == '0' || visited[x][y]) return 0;
	visited[x][y] = true;
	count++;
	dfs(x + 1, y, vec, visited, count);
	dfs(x - 1, y, vec, visited, count);
	dfs(x, y + 1, vec, visited, count);
	dfs(x, y - 1, vec, visited, count);
	return 1;
}


int main()
{
	int n;
	cin >> n;

	vector<string> vec(n);
	vector<vector<bool>> visited(n, vector<bool>(n, false));

	for (int i = 0; i < n; ++i) {
		cin >> vec[i];
	}

	vector<int> result;
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j) {
			if (visited[i][j] == false && vec[i][j] == '1') {
				dfs(i, j, vec, visited, cnt);
				result.push_back(cnt);
				cnt = 0;
			}
		}
	}

	cout << result.size() << endl;
	sort(result.begin(), result.end());
	for (auto& a : result)
		cout << a << endl;
}