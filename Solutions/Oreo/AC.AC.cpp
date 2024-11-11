#include <bits/stdc++.h>
using namespace std;

signed main() {
    string a[6], b[6];
    for(int i = 0; i < 6; i++) cin >> a[i];
    for(int i = 0; i < 6; i++) cin >> b[i]; 
    for(int i = 0; i < 6; i++) reverse(b[i].begin(), b[i].end());
    auto turn = [&]() -> void {
        string c[6];
        for(int i = 0; i < 6; i++) c[i] = b[i];
        for(int i = 0; i < 6; i++) {
            for(int j = 0; j < 6; j++) {
                b[5-j][i] = c[i][j];
            }
        }
    };

    for(int k = 0; k < 5; k++) {
        bool same = true;
        for(int i = 0; i < 6; i++) {
            for(int j = 0; j < 6; j++) {
                if(a[i][j] + b[i][j] != a[0][0] + b[0][0]) same = false;
            }
        }
        if(same) {
            cout << "Yes\n";
            return 0;
        }
        turn();
    }
    cout << "No\n";

}
