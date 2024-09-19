#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

struct node
{
	int x;
	int y;
	node* parent;
};


vector<string> graph;
int n, m; // 목적지 graph[n-1][m-1];
// 각 노드는 pair<int, int>로 사용하도록 하자

pair<int, int> arr[] = { {1, 0}, {0, 1}, {-1,0}, { 0,-1 } };

void BFS()
{
	// 
	



	vector<node> answer;
	vector<node> queue;

	queue.push_back({ 0, 0 , nullptr});
	while (not queue.empty()) {
		auto cur_node = queue.front(); // 맨 앞을 꺼내기
		queue.erase(queue.begin());
		graph[cur_node.x][cur_node.y] = '0';
		answer.push_back(cur_node); // 방문완료
		if (cur_node.x == n - 1 and cur_node.y == m - 1)
			break; // 완료
		bool flag = false;
		for (auto& pt : arr) {
			// 상하좌우 탐색
			int x = cur_node.x + pt.first;
			int y = cur_node.y + pt.second;
			if (x < 0 or x > n-1) continue;
			if (y < 0 or y > m - 1) continue;
			pair<int, int> tmp = { x, y };
			// 갈수있고 탐색하지 않았다면
			if (graph[x][y] == '1' and find(answer.begin(), answer.end(), tmp) == answer.end()) {
				flag = true;
				queue.push_back({ x, y, &answer.back()}); // 넣기
			}
		}
		if (!flag) {
			answer.pop_back();
		}
	}

	node finding = answer.back();
	while (true) {
		cout << finding.x << ", " << finding.y << endl;
		finding = *finding.parent;
		if (finding.x == 0 and finding.y == 0)
			break;
	}
}

int main()
{
	cin >> n >> m;
	string tmp;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		graph.emplace_back(tmp);
	}
	
	BFS();
}