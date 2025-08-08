#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> upper(n);
        for(int i = 0; i < n; i++) {
            upper[i] = a[i] + x;
        }
        vector<int> lower(n);
        for(int i = 0; i < n; i++) {
            lower[i] = a[i] - x;
            if(lower[i] < 0) {
                lower[i] = 0;
            }
        }
        int ans = 0;
        int upper_bound = upper[0];
        int lower_bound = lower[0];
        for(int i = 1;i<n;i++){
            if(upper[i]< lower_bound || lower[i] > upper_bound) {
                ans++;
                upper_bound = upper[i];
                lower_bound = lower[i];
            } else {
                upper_bound = min(upper_bound, upper[i]);
                lower_bound = max(lower_bound, lower[i]);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}