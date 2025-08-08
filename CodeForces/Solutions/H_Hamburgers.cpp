#include<bits/stdc++.h>
using namespace std;
bool isPossible(long long int mid,string s,long long int nb,long long int ns,long long int nc,long long int pb,long long int ps,long long int pc,long long int r){
    long long int rb=0,rs=0,rc=0;
    for(long long int i=0;i<s.size();i++){
        if(s[i]=='B'){
            rb++;
        }
        else if(s[i]=='S'){
            rs++;
        }
        else{
            rc++;
        }
    }
    rb*=mid;
    rs*=mid;
    rc*=mid;
    long long int cost = 0;
    if(nb<rb){
        cost += (rb-nb)*pb;
    }
    if(ns<rs){
        cost += (rs-ns)*ps;
    }
    if(nc<rc){
        cost += (rc-nc)*pc;
    }
    return cost<=r;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    long long int nb,ns,nc,pb,ps,pc,r;
    cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    long long int low = 0;
    long long int high = 100000000000000;
    long long int mid = low + (high - low)/2;
    long long int ans = 0;
    while(low<=high){
        if(isPossible(mid,s,nb,ns,nc,pb,ps,pc,r)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        mid = low + (high - low)/2;
    }
    cout<<ans;
    return 0;
}