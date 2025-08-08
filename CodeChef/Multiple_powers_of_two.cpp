#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min_x = INT_MAX;
    while(q--){
        int x;
        cin>>x;
        if(x>=min_x){
            continue;
        }
        else{
            min_x = x;
            for(int i=0;i<n;i++){
                if((arr[i]&((1<<x)-1))==0){
                    arr[i]=(arr[i]|((1<<x)-1));
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}