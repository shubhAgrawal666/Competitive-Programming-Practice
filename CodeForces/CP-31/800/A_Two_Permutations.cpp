#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n==a&&a==b){
        cout<<"Yes"<<endl;
        return;
    }
    vector<int> perm1(n,0);
    for(int i=0;i<n;i++){
        perm1[i] = i+1;
    }
    vector<int> perm2(n,0);
    for(int i=0;i<a;i++){
        perm2[i] = perm1[i];
    }
    for(int i = n-1;i>=n-b;i--){
        perm2[i] = perm1[i];
    }
    int count = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if(perm2[i]==perm1[i]){
            count++;
        }
        if(perm2[i]==0){
            count1++;
        }
    }
    if(count==n){
        cout<<"No"<<endl;
        return;
    }
    else{
        if(count1>=2){
            cout<<"Yes"<<endl;
            return;
        }
        else{
            cout<<"No"<<endl;
            return;
        }
    }
    //cout<<n<<" "<<count<<" "<<count1<<endl;
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