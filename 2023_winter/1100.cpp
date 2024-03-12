#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<array<char, 8>, 8> a;
    int cnt = 0;
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0 && a[i][j] == 'F')
                    cnt++;
            }
            else
            {
                if (j % 2 != 0 && a[i][j] == 'F')
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
}