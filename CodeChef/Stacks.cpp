#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &x : arr) cin >> x;

        vector<int> lis;  // Holds the ends of potential increasing subsequences

        for (int i = 0; i < n; ++i) {
            auto it = upper_bound(lis.begin(), lis.end(), arr[i]);
            if (it == lis.end()) {
                lis.push_back(arr[i]);
            } else {
                *it = arr[i];
            }
        }

        cout << lis.size() << " ";
        for (int x : lis) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
