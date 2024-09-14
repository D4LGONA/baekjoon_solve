#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;

unordered_map<int, set<int>> graph;
int n, m, v = 1;

void BFS()
{
	vector<int> answer;
	vector<int> queue;

	queue.push_back(v);
	while (not queue.empty()) {
		for (auto& a : graph[queue.front()])
		{
			if (find(queue.begin(), queue.end(), a) == queue.end() and find(answer.begin(), answer.end(), a) == answer.end()) // �ȿ� ���ٸ�
				queue.push_back(a);
		}
		answer.push_back(queue.front());
		queue.erase(queue.begin());
	}

	cout << answer.size() - 1;
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;
		// �׳� set���� ���� ���ص� �ǰ� ������
		graph[a].insert(b);
		graph[b].insert(a);
	}

	BFS();
}