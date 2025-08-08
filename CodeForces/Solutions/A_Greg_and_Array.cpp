#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<long long int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> l(m);
    vector<int> r(m);
    vector<int> d(m);
    for(int i = 0;i<m;i++){
        cin>>l[i]>>r[i]>>d[i];
        l[i]--;
        r[i]--;
    }
    vector<long long int> diff(n,0);
    vector<long long int> cntdiff(m,0);
    while(k--){
        int x,y;
        cin>>x>>y;
        x--;y--;
        cntdiff[x]++;
        if(y!=m-1){
            cntdiff[y+1]--;
        }
    }
    for(int i = 1;i<m;i++){
        cntdiff[i]+=cntdiff[i-1];
    }
    for(int i =0;i<m;i++){
        if(cntdiff[i]>0){
            diff[l[i]]+=d[i]*cntdiff[i];
            if(r[i]!=n-1){
                diff[r[i]+1]-=d[i]*cntdiff[i];
            }
        }
    }
    for(int i = 1;i<n;i++){
        diff[i]+=diff[i-1];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]+diff[i]<<" ";
    }
    cout<<"\n";
return 0;
}