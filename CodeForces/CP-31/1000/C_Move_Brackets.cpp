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
    vector<char> arr;
    int cnt = 0;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(arr.empty()){
            if(c=='('){
                arr.push_back(c);
            }
        }
        else{
            if(c=='('&&arr[arr.size()-1]=='('){
                arr.push_back(c);
            }
            else if(c==')'&&arr[arr.size()-1]=='('){
                arr.pop_back();
                cnt++;
            }
        }
    }
    cout<<n/2-cnt<<endl;
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