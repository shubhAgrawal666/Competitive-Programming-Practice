#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt0 = count(s.begin(), s.end(), '0');
        int cnt1 = n - cnt0;
        int total_pairs = n / 2;

        // Check if k is achievable
        if (k >= 0 && k <= total_pairs) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
