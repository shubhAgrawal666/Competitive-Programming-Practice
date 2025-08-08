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
    int n,m;
    cin>>n>>m;
    vec2(int,arr,n,m);
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vec2(int,pre,n,m);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            pre[i][j] = arr[i][j];
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
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        a--;b--;c--;d--;
        int diffx = (c-a)+1;
        int diffy = (d-b)+1;
        if(arr[a][b]==0||arr[c][d]==0){
            cout<<0<<endl;
        }
        else{
            int cnt = pre[c][d];
            if(b>0){
                cnt-=pre[c][b-1];
            }
            if(a>0){
                cnt-=pre[a-1][d];
            }
            if(a>0&&b>0){
                cnt+=pre[a-1][b-1];
            }
            if(cnt==(diffx*diffy)){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    return 0;
}