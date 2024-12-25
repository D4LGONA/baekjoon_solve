#include <iostream>
#include <map>  // std::map ���
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<int, int> map;  // ���ĵ� ���·� �����
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        map[tmp]++;  // �ߺ��� ���� ī��Ʈ
    }

    // ���ĵ� ���·� ���
    for (auto& p : map) {
        for (int i = 0; i < p.second; ++i) {
            cout << p.first << '\n';
        }
    }
}
