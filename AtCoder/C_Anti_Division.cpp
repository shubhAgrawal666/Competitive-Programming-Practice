#include<bits/stdc++.h>
using namespace std;
long long int fun(long long int b,long long int a,long long int x){
    return (b/x)-((a-1)/x);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int n = b-a+1;
    cout<<n-(fun(b,a,c)+fun(b,a,d)-fun(b,a,lcm(c,d)))<<endl;
    return 0;
}