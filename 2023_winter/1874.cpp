#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    stack<int> st;
    string result; // ����� ���ڿ��� ����
    st.push(0);
    int cnt = 1;

    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;

        if (tmp < cnt) { // ���� ���� ������ ��
            while (true) {
                if (st.top() < tmp) { // �Ұ��� ����
                    cout << "NO\n";
                    return 0;
                }
                if (st.top() == tmp) break;
                result += '-';
                st.pop();
            }
            result += '-';
            st.pop();
        }
        else { // ū ���� ������ ��
            while (cnt != tmp) {
                result += '+';
                st.push(cnt);
                cnt++;
            }
            result += '+';
            cnt++;
            result += '-';
        }
    }

    // ����� �� �پ� ���
    for (char c : result) {
        cout << c << '\n';
    }

    return 0;
}
