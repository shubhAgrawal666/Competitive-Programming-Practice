#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<int,int> mp;
        for(int i = 0; i < n; i++) {
            mp[a[i]]++;
        }
        bool possible = true;
        for(int i = 0; i<n;i++){
            if(mp[a[i]]<=1){
                possible = false;
                break;
            }
        }
        if(possible){
            int sum = 0;
            for(auto it : mp){
                cout<<sum+it.second<<" ";
                for(int i = 1+sum; i<sum+it.second;i++){
                    cout<<i<<" ";
                }
                sum += it.second;
            }
            cout<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}