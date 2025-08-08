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
    vector<pair<int,int>> ans;
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                cnt++;
                ans.push_back({1,j+1});
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(brr[j]>brr[j+1]){
                swap(brr[j],brr[j+1]);
                cnt++;
                ans.push_back({2,j+1});
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>brr[i]){
            swap(arr[i],brr[i]);
            cnt++;
            ans.push_back({3,i+1});
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
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