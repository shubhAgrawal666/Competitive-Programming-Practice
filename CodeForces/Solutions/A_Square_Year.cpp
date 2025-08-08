#include "bits/stdc++.h"
using namespace std;

#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;

bool isSquare(ll a) {
    ll root = sqrtl(a);
    return root * root == a;
}

void solve() {
    string s;
    cin >> s;
    ll n = stoll(s); // safe for large numbers

    if (isSquare(n)) {
        ll v = sqrtl(n);
        cout << v << " " << 0 << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}