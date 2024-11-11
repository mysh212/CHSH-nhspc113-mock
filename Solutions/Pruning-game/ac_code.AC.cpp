#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<char> used(n + 1);
    vector<ll> level;
    queue<int> q;
    q.push(1);
    used[1] = true;
    while (!q.empty()) {
        int sz = q.size();
        level.push_back(sz);
        for (int i = 0; i < sz; i++) {
            int u = q.front();
            q.pop();
            for (int v: adj[u]) {
                if (used[v]) {
                    continue;
                }
                q.push(v);
                used[v] = true;
            }
        }
    }
    ll ans = 0, sum = 0, pm = 1;
    for (int i = 1; i < level.size(); i++) {
        sum = (sum + pm) % MOD;
        ans = (ans + level[i] * sum % MOD) % MOD;
        pm = pm * m % MOD;
    }
    cout << ans << '\n';
}