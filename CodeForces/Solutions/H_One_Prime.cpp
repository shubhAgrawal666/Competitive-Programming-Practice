#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    bool isPrime = true;
    if(n<=1){
        isPrime = false;
    }
    for(long long int i=2;i*i<n;i++){
        if(n%i==0){
            isPrime = false;
        }
    }
    if(isPrime){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}