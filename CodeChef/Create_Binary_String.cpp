#include <bits/stdc++.h>
using namespace std;
void solve() {
    int N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;
    int maxi = 0;
    for (int zcnt = 0; zcnt <= N; ++zcnt) {
        int oCnt = N - zcnt;
        int cnt01 = A * zcnt + B * oCnt + C * zcnt * oCnt;
        int cnt10 = A * zcnt + B * oCnt + D * zcnt * oCnt;
        maxi = max({maxi, cnt01, cnt10});
    }
    cout << maxi << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
