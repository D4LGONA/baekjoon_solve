#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int solution(int n, vector<vector<int>> computers) {
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
        vec[i] = i;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (computers[i][j] == 1) {
                int tmp = min(i, j);
                while (true) {

                }
            }
        }
    }

    set<int> s = set(vec.begin(), vec.end());
    std::cout << s.size();
    return s.size();
}

int main()
{
    solution(3, {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}} );
}