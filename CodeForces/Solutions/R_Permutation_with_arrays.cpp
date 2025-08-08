#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(b[j]==a[i]){
                b[j]=0;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(b[i]!=0){
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
}