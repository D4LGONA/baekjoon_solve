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
    string result; // 결과를 문자열로 저장
    st.push(0);
    int cnt = 1;

    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;

        if (tmp < cnt) { // 작은 값이 들어왔을 때
            while (true) {
                if (st.top() < tmp) { // 불가능 조건
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
        else { // 큰 값이 들어왔을 때
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

    // 결과를 한 줄씩 출력
    for (char c : result) {
        cout << c << '\n';
    }

    return 0;
}
