#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<string> arr(n);
    for(int i = 0;i<n;i++){
        string s;
        cin>>s;
        arr[i] = s;
    }
    vector<vector<int>> pre(n,vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            pre[i][j] = (arr[i][j]=='*')?1:0;
            if(i>0){
                pre[i][j]+=pre[i-1][j];
            }
            if(j>0){
                pre[i][j]+=pre[i][j-1];
            }
            if(i>0&&j>0){
                pre[i][j]-=pre[i-1][j-1];
            }
        }
    }
    while(q--){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        l1 = l1-1;
        l2 = l2-1;
        r1 = r1-1;
        r2 = r2-1;
        int ans = pre[l2][r2];
        if(l1>0){
            ans-=pre[l1-1][r2];
        }
        if(r1>0){
            ans-=pre[l2][r1-1];
        }
        if(l1>0&&r1>0){
            ans+=pre[l1-1][r1-1];
        }
        cout<<ans<<endl;
    }
    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         cout<<pre[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}