#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // ����� �ӵ� ����ȭ
    cin.tie(NULL); // cin�� cout�� ������ �����Ͽ� ����� �ӵ� ���

    int n, m;
    cin >> n;
    unordered_map<int, bool> dest;

    // ù ��° �迭 �Է��� unordered_map�� ����
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        dest[tmp] = true; // �����ϴ��� ���θ� ����
    }

    cin >> m;
    // �� ��° �迭�� ���� ���� ���θ� Ȯ��
    for (int i = 0; i < m; ++i) {
        int tmp;
        cin >> tmp;
        cout << (dest.count(tmp) ? "1\n" : "0\n");
    }
}
