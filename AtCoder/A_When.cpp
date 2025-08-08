#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int hour = 21+n/60;
    int minutes = n%60;
    cout<<hour<<":";
    if(minutes<10){
        cout<<"0"<<minutes<<endl;
    }
    else{
        cout<<minutes<<endl;
    }
    return 0;
}