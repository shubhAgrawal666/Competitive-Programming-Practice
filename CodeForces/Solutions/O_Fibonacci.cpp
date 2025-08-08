#include<bits/stdc++.h>
using namespace std;
long long int fib(long long int n){
    if(n==1){
        return 0;
    }
    long long int a = 0;
    long long int b = 1;
    long long int ans = 1;
    for(long long int i=1;i<=n-2;i++){
        ans = a+b;
        a = b;
        b = ans;
    }
    return ans;
}
int main(){
    long long int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}