#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> brr(n);
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    int l = -1, r = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] != brr[i]) {
            l = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--) {
        if(arr[i] != brr[i]) {
            r = i;
            break;
        }
    }

    int maxi = brr[r];
    int mini = brr[l];
    while(l>=1&&arr[l-1]<=mini){
        l--;
        mini = arr[l];
    }
    while(r<=n-2&&arr[r+1]>=maxi){
        r++;
        maxi = arr[r];
    }
    cout<<l+1<<" "<<r+1<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}