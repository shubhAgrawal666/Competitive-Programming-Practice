#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int rem = n%5;
    if(rem==3||rem==4){
        cout<<n+(5-rem)<<endl;
    }
    else{
        cout<<n-rem<<endl;
    }
    return 0;
}