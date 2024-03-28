#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M, i, j, k;
    cin >> N >> M;
    vector<int> v(N);
    for (int m = 0; m < M; ++m)
    {
        cin >> i >> j >> k;
        for (int n = i - 1; n < j; ++n)
        {
            v[n] = k;
        }
    }

    for (int n : v)
        cout << n << " ";
}