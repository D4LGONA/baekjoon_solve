#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    string s = to_string(b);
    for (int i = s.size() - 1; i >= 0 ; --i)
        cout << a * int(s[i] - '0')<< endl;
    cout << a * b << endl;
}