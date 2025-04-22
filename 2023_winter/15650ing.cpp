#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int n, r;
vector<int> v(n);

void func(int depth, int start)
{
    if (depth == r) {
        cout << endl;
        return;
    }
    for (int i = start; i < n; ++i) {
        cout << v[i] << " ";
        func(depth + 1, start + 1);
    }
}

int main()
{
    cin >> n >> r;
    for (int i = 1; i <= n; ++i) {
        v.push_back(i);
    }

    func(0, 0);

    
}