#include<bits/stdc++.h>
using namespace std;
bool isComposite(int j){
    for(int i=2;i*i<=j;i++){
        if(j%i==0){
            return true;
        }
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin>>n;
    for(long long int i = 4;i<=1e9;i++){
        if(isComposite(i)&&isComposite(n+i)){
            cout<<n+i<<" "<<i<<"\n";
            break;
        }
    }
    return 0;
}