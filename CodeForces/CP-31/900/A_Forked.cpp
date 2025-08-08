#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xk,yk,xq,yq;
        cin>>xk>>yk>>xq>>yq;
        set<pair<int,int>> k;
        set<pair<int,int>> q;
        k.insert({xk+a,yk+b});
        k.insert({xk+a,yk-b});
        k.insert({xk-a,yk+b});
        k.insert({xk-a,yk-b});
        k.insert({xk+b,yk+a});
        k.insert({xk+b,yk-a});
        k.insert({xk-b,yk+a});
        k.insert({xk-b,yk-a});
        q.insert({xq+a,yq+b});
        q.insert({xq+a,yq-b});
        q.insert({xq-a,yq+b});
        q.insert({xq-a,yq-b});
        q.insert({xq+b,yq+a});
        q.insert({xq+b,yq-a});
        q.insert({xq-b,yq+a});
        q.insert({xq-b,yq-a});
        int ans = 0;
        for(auto it : k){
            if(count(q.begin(),q.end(),it)){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}