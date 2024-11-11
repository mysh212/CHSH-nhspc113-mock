#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1e5;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector<ll> factor;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            if (factor.empty() || i != factor.back()) {
                factor.push_back(i);
            }
            n /= i;
        }
    }
    if (n > 1) {
        factor.push_back(n);
    }
    if (factor.size() == 1) {
        cout << factor.back() << '\n';
    } else {
        cout << "1\n";
    }
}