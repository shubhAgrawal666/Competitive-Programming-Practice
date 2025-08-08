#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int count = 0;
        while(n%6==0){
            n=n/6;
            count++;
        }
        if(n==1){
            cout<<count<<endl;
            continue;
        }
        if(n%6==3){
            n=n*2;
            count++;
            while(n%6==0){
                n=n/6;
                count++;
                if(n%6==3){
                    n=n*2;
                    count++;
                }
            }
            if(n==1){
                cout<<count<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}