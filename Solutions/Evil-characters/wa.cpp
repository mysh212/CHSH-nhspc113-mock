#include <bits/stdc++.h>
using namespace std;

string mul(string a, string b) {
    vector<int> res(a.size() + b.size());
    for (int i = a.size() - 1; i >= 0; i--) {
        for (int j = b.size() - 1; j >= 0; j--) {
            res[i + j + 1] += (a[i] - '0') * (b[j] - '0'); 
            res[i + j] += res[i + j + 1] / 10;
            res[i + j + 1] %= 10; 
        }
    }
    bool zero = true;
    string c;
    for (int i = 0; i < res.size(); i++) {
        if (res[i] == 0 && zero) {
            continue;
        }
        zero = false;
        c.push_back(res[i] + '0');
    }
    if (c.empty()) {
        c.push_back('0');
    }
    return c;
}
int main() {
    string s, ans = "1";
    while (getline(cin, s)) {
        if (s[0] < '0' || s[0] > '9') {
            continue;
        }
        ans = mul(ans, s);
    }
    cout << ans << '\n';
}