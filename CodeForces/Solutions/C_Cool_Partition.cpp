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
    unordered_set<int> st;
    st.insert(arr[0]);
    int ans = 1;
    unordered_set<int> temp;
    for(int i=1;i<n;i++){
        if(st.count(arr[i])){
            st.erase(arr[i]);
            temp.insert(arr[i]);
        }
        else{
            temp.insert(arr[i]);
        }
        if(st.empty()){
            ans++;
            st.insert(temp.begin(),temp.end());
        }
    }
    cout<<ans<<endl;
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