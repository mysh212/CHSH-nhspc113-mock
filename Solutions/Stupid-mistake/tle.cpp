#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    ll ans = n;
    for (ll k = 2; k < n; k++) {
        ll res = 1;
        for (ll i = 1; i <= k; i++) {
            res *= n - i + 1;
            res /= i;
        }
        ans = __gcd(res, ans);
    }
    cout << ans << '\n';
}