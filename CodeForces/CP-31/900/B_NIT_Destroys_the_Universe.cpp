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
        vector<long long> arr(n);
        for (int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        int ans = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                count++;
            }
            else{
                if(count!=0){
                    ans++;
                }
                count = 0;
            }
        }
        if(count!=0){
            ans++;
        }
        if(ans>2){
            cout<<2<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}
