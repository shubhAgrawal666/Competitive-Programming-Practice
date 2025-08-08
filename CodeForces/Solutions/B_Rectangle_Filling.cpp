#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0][0]==arr[n-1][m-1]||arr[0][m-1]==arr[n-1][0]){
        cout<<"YES"<<endl;
    }
    else{
        if(arr[0][0]==arr[0][m-1]){
            char ch = arr[0][0];
            for(int i=0;i<m;i++){
                if(arr[n-1][i]==ch){
                    cout<<"YES"<<endl;
                    return;
                }
            }
            ch = arr[n-1][0];
            for(int i=0;i<m;i++){
                if(arr[0][i]==ch){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
        else{
            char ch = arr[n-1][m-1];
            for(int i=0;i<n;i++){
                if(arr[i][0]==ch){
                    cout<<"YES"<<endl;
                    return;
                }
            }
            ch = arr[0][0];
            for(int i=0;i<n;i++){
                if(arr[i][m-1]==ch){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
        cout<<"NO"<<endl;
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