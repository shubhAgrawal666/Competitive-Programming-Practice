#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin>>n;
    map<int,int> mp;
    for(long long int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x] = i;
    }
    long long int v = 0;
    long long int p = 0;
    long long int t;
    cin>>t;
    while(t--){
        int temp;
        cin>>temp;
        v+=mp[temp]+1;
        p+=n-mp[temp];
    }
    cout<<v<<" "<<p;
    return 0;
}