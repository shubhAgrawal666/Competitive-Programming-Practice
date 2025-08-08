#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<ll> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vec(int,arr,n);
    fori(i,n,arr);
    vec(int,pre,n);
    pre[0] = arr[0];
    for(int i = 1;i<n;i++){
        pre[i] = pre[i-1]+arr[i];
    }
    vector<ll> a(arr.begin(),arr.end());
    sort(a.begin(),a.end());
    vec(int,pre1,n);
    pre1[0] = a[0];
    for(int i = 1;i<n;i++){
        pre1[i] = pre1[i-1]+a[i];
    }
    int m;
    cin>>m;
    while(m--){
        int t,l,r;
        cin>>t>>l>>r;
        l--;
        r--;
        ll ans = 0;
        if(t==1){
            ans = pre[r];
            if(l>=1){
                ans-=pre[l-1];
            }
        }
        else{
            ans = pre1[r];
            if(l>=1){
                ans-=pre1[l-1];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}