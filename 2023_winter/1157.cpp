#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int arr[26]{};
    for (char& c : s)
    {
        if (isupper(c))
            arr[c - 'A']++;
        else
            arr[c - 'a']++;
    }

    vector<pair<int, char>> v;
    for (int i = 0; i < 26; ++i)
    {
        if (v.size() == 0 || arr[i] > v[0].first)
        {
            v.clear();
            v.push_back({ arr[i], i + 'A'});
        }
        else if (arr[i] == v[0].first)
            v.push_back({ arr[i], i + 'A' });
    }

    if (v.size() > 1)
        cout << "?";
    else
        cout << v[0].second;
}