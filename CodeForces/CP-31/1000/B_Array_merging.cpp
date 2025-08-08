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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        map<int , int> mp1;
        map<int , int> mp2;
        int count = 1;
        for(int i = 0;i<n-1;i++){
            if(a[i]==a[i+1]){
                count++;
            }
            else{
                mp1[a[i]] = max(mp1[a[i]], count);
                count = 1;
            }
        }
        mp1[a[n-1]] = max(mp1[a[n-1]], count);
        count = 1;
        for(int i = 0;i<n-1;i++){
            if(b[i]==b[i+1]){
                count++;
            }
            else{
                mp2[b[i]] = max(mp2[b[i]], count);
                count = 1;
            }
        }
        mp2[b[n-1]] = max(mp2[b[n-1]], count);
        int ans = INT_MIN;
        for(int i=1;i<=2*n;i++){
            ans = max(ans, mp1[i] + mp2[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
