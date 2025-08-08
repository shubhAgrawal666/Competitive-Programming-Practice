#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    int n,s;
    cin>>n>>s;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(s>=arr[0]&&s<=arr[n-1]){
        int left = abs(s-arr[0]);
        int right = abs(arr[n-1]-s);
        if(left<=right){
            cout<<(2*left)+right<<endl;
        }
        else{
            cout<<left+(2*right)<<endl;
        }
    }
    else{
        if(s<arr[0]){
            cout<<arr[n-1]-s<<endl;
        }
        else{
            cout<<s-arr[0]<<endl;
        }
    }
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