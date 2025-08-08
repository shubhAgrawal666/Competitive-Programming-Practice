#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans = min(ans,abs(arr[i]));
    }
    cout<<ans;
    return 0;
}