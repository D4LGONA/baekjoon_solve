#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <ranges>
using namespace std;

unordered_map<int, vector<int>> graph;
int n, m, v;

void BFS()
{
	vector<int> answer;
	vector<int> queue;

	queue.push_back(v);
	while (not queue.empty()) {
		for (auto& a : graph[queue.front()])
		{
			if (find(queue.begin(), queue.end(), a) == queue.end() 
				and find(answer.begin(), answer.end(), a) == answer.end()) // �ȿ� ���ٸ�
				queue.push_back(a);
		}
		answer.push_back(queue.front());
		queue.erase(queue.begin());
	}
	
	for (int& i : answer)
		cout << i << " ";
	cout << endl;
}

void DFS()
{
	vector<int> answer;
	vector<int> stack;

	stack.push_back(v);
	while (not stack.empty()) { // ���ÿ� ���� ���� ��
		if (find(answer.begin(), answer.end(), stack.back()) != answer.end()) { // stack�� �� �ڸ� �̹� �湮�ߴٸ�
			stack.pop_back();
		}
		else {
			int n = stack.back();
			answer.push_back(n); // ������ �� �ڸ� �湮����.
			stack.pop_back(); // ������.
			for(auto it = graph[n].rbegin(); it != graph[n].rend(); ++it) // �� �ڿ� �ִ� ģ������
			{
				if(find(answer.begin(), answer.end(), *it) == answer.end()) // �湮���� �ʾҴٸ�
					stack.push_back(*it); // ���ÿ� �߰�����.
			}
		}
	}
	for (int& i : answer)
		cout << i << " ";
	cout << endl;
}

int main()
{

	cin >> n >> m >> v;

	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;
		// ����� ó��
		if (find(graph[a].begin(), graph[a].end(), b) == graph[a].end())
			graph[a].push_back(b);
		if (find(graph[b].begin(), graph[b].end(), a) == graph[b].end())
			graph[b].push_back(a);
	}
	for (auto& i : graph)
		sort(i.second.begin(), i.second.end()); // ���� ����
	
	DFS();
	BFS();
}