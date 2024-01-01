#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    int n, tmp, result = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        if (tmp == 0)
            v.pop_back();
        else
            v.push_back(tmp);
    }

    for (int i = 0; i < v.size(); ++i)
        result += v[i];
    cout << result;
}