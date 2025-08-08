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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m));
        int sum = 0;
        int negcnt = 0;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                mini = min(mini,abs(arr[i][j]));
                if(arr[i][j]<=0){
                    negcnt++;
                }
                sum+=abs(arr[i][j]);
            }
        }
        if(negcnt%2==0){
            cout<<sum<<endl;
        }
        else{
            cout<<sum-2*mini<<endl;
        }
    }
    return 0;
}