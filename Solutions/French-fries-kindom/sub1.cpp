#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(k+1);

    int sum = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x%k]++;
        for(int j = x%k+1; j < k; j++) sum += a[j];
    }
    cout << sum << endl;
}