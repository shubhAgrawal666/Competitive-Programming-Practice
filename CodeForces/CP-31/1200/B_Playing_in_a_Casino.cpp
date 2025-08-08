#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        vector<vector<long long int>> arr(n,vector<long long int>(m));
        for(long long int i=0;i<n;i++){
            for(long long int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        vector<vector<long long int>> col(m);
        for(long long int i=0;i<m;i++){
            for(long long int j=0;j<n;j++){
                col[i].push_back(arr[j][i]);
            }
            sort(col[i].begin(),col[i].end());
        }
        long long int ans = 0;
        for(long long int i=0;i<m;i++){
            for(long long int j=n-1;j>=0;j--){
                ans+=col[i][j]*(j-(n-j-1));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}