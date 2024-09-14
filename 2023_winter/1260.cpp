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
				and find(answer.begin(), answer.end(), a) == answer.end()) // 안에 없다면
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
	while (not stack.empty()) { // 스택에 뭔가 있을 때
		if (find(answer.begin(), answer.end(), stack.back()) != answer.end()) { // stack의 맨 뒤를 이미 방문했다면
			stack.pop_back();
		}
		else {
			int n = stack.back();
			answer.push_back(n); // 스택의 맨 뒤를 방문하자.
			stack.pop_back(); // 없애자.
			for(auto it = graph[n].rbegin(); it != graph[n].rend(); ++it) // 맨 뒤에 있는 친구들을
			{
				if(find(answer.begin(), answer.end(), *it) == answer.end()) // 방문하지 않았다면
					stack.push_back(*it); // 스택에 추가하자.
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
		// 양방향 처리
		if (find(graph[a].begin(), graph[a].end(), b) == graph[a].end())
			graph[a].push_back(b);
		if (find(graph[b].begin(), graph[b].end(), a) == graph[b].end())
			graph[b].push_back(a);
	}
	for (auto& i : graph)
		sort(i.second.begin(), i.second.end()); // 각각 정렬
	
	DFS();
	BFS();
}