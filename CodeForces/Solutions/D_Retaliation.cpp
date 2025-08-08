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
    int x = 0;
    int y = 0;
    if(((2*arr[0])-arr[1])%(n+1)==0){
        y = ((2*arr[0])-arr[1])/(n+1);
    }
    if(((n*arr[1])-((n-1)*arr[0]))%(n+1)==0){
        x = ((n*arr[1])-((n-1)*arr[0]))/(n+1);
    }
    if(x<0||y<0||(x==0&&y==0)){
        // cout<<x<<" "<<y<<" "<<endl;
        cout<<"NO"<<endl;
        return;
    }
    else{
        for(int i=3;i<=n;i++){
            if(x*(i)+y*(n-i+1)!=arr[i-1]){
                // cout<<x<<" "<<y<<" "<<endl;
                cout<<"NO"<<endl;
                return;
            }
        }
        // cout<<x<<" "<<y<<" "<<endl;
        cout<<"YES"<<endl;
        return;
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