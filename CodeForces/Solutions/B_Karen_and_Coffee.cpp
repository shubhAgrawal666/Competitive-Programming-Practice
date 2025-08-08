#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> cnt(200001);
    for(int i = 0;i<n;i++){
        int l,r;
        cin>>l>>r;
        cnt[l]++;
        cnt[r+1]--;
    }
    vector<int> adm;
    for(int i = 0;i<=200000;i++){
        if(i!=0){
            cnt[i]+=cnt[i-1];
        }
        if(cnt[i]>=k){
            adm.push_back(i);
        }
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        auto low = lower_bound(adm.begin(),adm.end(),a);
        auto high = upper_bound(adm.begin(),adm.end(),b);
        cout<<high-low<<endl;
    }
    return 0;
}