#include <iostream>
#include<vector>
#include <queue>
using namespace std;

pair<int, int> direction[] = { {1,0}, {-1,0}, {0,1}, {0,-1} };
vector<vector<int>> graph;
vector<vector<bool>> visited;
int m, n, k; // 가로, 세로, 배추위치

void bfs(int startX, int startY) {
    queue<pair<int, int>> q;
    q.push({ startX, startY });
    visited[startX][startY] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx = x + direction[i].first;
            int ny = y + direction[i].second;

            if (nx >= 0 && nx < m && ny >= 0 && ny < n && graph[nx][ny] == 1 && !visited[nx][ny]) {
                q.push({ nx, ny });
                visited[nx][ny] = true;
            }
        }
    }
}

int main()
{
	int t; // 테스트케이스 개수
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> m >> n >> k;
        graph.assign(m, vector<int>(n, 0));
        visited.assign(m, vector<bool>(n, false));

        for (int j = 0; j < k; ++j) {
            int x, y;
            cin >> x >> y;
            graph[x][y] = 1;
        }
        int count = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (graph[i][j] == 1 && !visited[i][j]) {
                    bfs(i, j);
                    count++;
                }
            }
        }

        cout << count << endl;
	}
}