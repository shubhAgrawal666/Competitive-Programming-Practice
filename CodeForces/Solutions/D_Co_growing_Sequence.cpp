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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    ans.push_back(0);
    for(int i=0;i<n-1;i++){
        if((arr[i]&arr[i+1])==arr[i]){
            ans.push_back(0);
        }
        else{
            int tempa = arr[i];
            int tempb = arr[i+1];
            int val = 0;
            int mul = 1;
            while(tempa!=0||tempb!=0){
                if(((tempa&1)==1)&&((tempb&1)==0)){
                    arr[i+1]+=mul;
                    val+=mul;
                }
                mul = mul<<1;
                tempb=tempb>>1;
                tempa=tempa>>1;
            }
            ans.push_back(val);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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