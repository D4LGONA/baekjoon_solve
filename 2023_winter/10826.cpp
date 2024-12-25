#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> dp;

string add(string a, string b) {
    string answer = "";
    int carry = 0;

    if (a.size() < b.size())
        swap(a, b);
    b.insert(b.begin(), a.size() - b.size(), '0');  

    for (int i = a.size() - 1; i >= 0; --i) {
        int n = (a[i] - '0') + (b[i] - '0') + carry;
        carry = n / 10;
        answer += to_string(n % 10);
    }

    if (carry) {
        answer += '1';
    }

    reverse(answer.begin(), answer.end());
    return answer;
}

int main() {
    int s;
    cin >> s;

    if (s == 0) {
        cout << "0";
        return 0;
    }

    dp.resize(s + 1);
    dp[0] = "0";
    dp[1] = "1";

    for (int i = 2; i <= s; ++i) {
        dp[i] = add(dp[i - 2], dp[i - 1]);
    }

    cout << dp.back();
}
