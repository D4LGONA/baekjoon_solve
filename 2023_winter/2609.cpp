#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans1 = 1, ans2 = a * b;
    for (int i = 2; i <= max(a, b); ++i)
    {
        if (a % i == 0 && b % i == 0)
            ans1 = i;
    }

    int m = a * b;
    int k;
    for (int i = 1; i < m; ++i)
    {
        k = m / i;
        if (k < a || k < b) break;
        if (k % a == 0 && k % b == 0)
            ans2 = k;
    }

    cout << ans1 << endl << ans2 << endl;
}