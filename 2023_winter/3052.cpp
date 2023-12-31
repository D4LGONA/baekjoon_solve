#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    for (int i = 0; i < 10; ++i)
    {
        cin >> n;
        bool flag = false;
        for (int j = 0; j < v.size(); ++j)
        {
            
            if (v[j] == n % 42)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
            v.push_back(n % 42);
    }
    cout << v.size();
}