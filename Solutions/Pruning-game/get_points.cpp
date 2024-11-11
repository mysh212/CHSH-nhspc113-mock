#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
    }
    ll ans = 0, sum = 0, pm = 1;
    for (int i = 0; i < n - 1; i++) {
        sum = (sum + pm) % MOD;
        ans = (ans + sum) % MOD;
        pm = (pm * m) % MOD;
    }
    cout << ans << '\n';
}