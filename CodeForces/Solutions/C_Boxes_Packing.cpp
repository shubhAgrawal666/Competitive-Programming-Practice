#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int count = 0;
    vector<int> ans;
    auto it = mp.begin();
    for(int i=0;i<mp.size();i++){
        ans.push_back(it->second);
        it++;
    }
    for(int i=0;i<ans.size();i++){
        count = max(count,ans[i]);
    }
    cout<<count<<endl;
    return 0;
}