#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    vector<ll> arr;
    for(int i=0;i<=31;i++){
        arr.push_back(1LL<<i);
    }
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        ll ans = LLONG_MIN;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>n){
                ans = max(ans,n-arr[i-1]+1);
                break;
            }
            else if(arr[i]==n){
                ans = max(ans,arr[i]-arr[i-1]);
                break;
            }
            else{
                ans = max(ans,arr[i]-arr[i-1]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}