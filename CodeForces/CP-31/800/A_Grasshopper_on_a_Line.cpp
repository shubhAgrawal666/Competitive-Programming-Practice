#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        int sum = 0;
        vector<int> ans;
        for(int i=x;i>=1;i--){
            if(i%k!=0){
                while(sum+i<=x){
                    sum+=i;
                    ans.push_back(i);
                }
                if(sum==x){
                    break;
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}