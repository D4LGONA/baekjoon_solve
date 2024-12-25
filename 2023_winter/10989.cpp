#include <iostream>
#include <map>  // std::map 사용
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<int, int> map;  // 정렬된 상태로 저장됨
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        map[tmp]++;  // 중복된 숫자 카운트
    }

    // 정렬된 상태로 출력
    for (auto& p : map) {
        for (int i = 0; i < p.second; ++i) {
            cout << p.first << '\n';
        }
    }
}
