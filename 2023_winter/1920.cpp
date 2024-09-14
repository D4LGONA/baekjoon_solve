#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // 입출력 속도 최적화
    cin.tie(NULL); // cin과 cout의 묶음을 해제하여 입출력 속도 향상

    int n, m;
    cin >> n;
    unordered_map<int, bool> dest;

    // 첫 번째 배열 입력을 unordered_map에 저장
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        dest[tmp] = true; // 존재하는지 여부만 저장
    }

    cin >> m;
    // 두 번째 배열에 대해 존재 여부를 확인
    for (int i = 0; i < m; ++i) {
        int tmp;
        cin >> tmp;
        cout << (dest.count(tmp) ? "1\n" : "0\n");
    }
}
