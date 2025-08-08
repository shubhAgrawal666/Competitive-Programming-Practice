#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int x,n;
        cin>>x>>n;
        // if(n>4){
        //     n = n-(n%4)+1;
        // }
        if(x%2==0){
            if(n%4==0){
                cout<<x<<endl;
            }
            else if(n%4==1){
                cout<<x-n<<endl;
            }
            else if(n%4==2){
                cout<<x+1<<endl;
            }
            else{
                cout<<x+(4*((n/4)+1))<<endl;
            }
        }
        else{
            if(n%4==0){
                cout<<x<<endl;
            }
            else if(n%4==1){
                cout<<x+n<<endl;
            }
            else if(n%4==2){
                cout<<x-1<<endl;
            }
            else{
                cout<<x-(4*((n/4)+1))<<endl;
            }
        }
    }
    return 0;
}