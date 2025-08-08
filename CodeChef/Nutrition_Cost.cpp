#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    int n,c;
    cin>>n>>c;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> brr(n);
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++){
        vec.push_back({brr[i],arr[i]});
    }
    sort(vec.begin(),vec.end());
    unordered_set<int> st;
    int y = 0;
    for(auto it : vec){
        if(it.first<c&&find(st.begin(),st.end(),it.second)==st.end()){
            st.insert(it.second);
            y+=it.first;
        }
    }
    cout<<(st.size()*c)-y<<endl;
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