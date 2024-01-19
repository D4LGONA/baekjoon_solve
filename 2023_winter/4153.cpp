#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    while (true)
    {
        cin >> a >> b >> c;
        if (a == 0 || b == 0 || c == 0) return 0;

        int m = max(a, max(b, c));
        if (m != c)
        {
            if (m == a)
                swap(a, c);
            else
                swap(b, c);
        }
        if(int(pow(a,2)) + int(pow(b,2)) == int(pow(c,2)))
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
}