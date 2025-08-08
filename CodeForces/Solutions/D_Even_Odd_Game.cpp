#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> arr(n);
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long int alice = 0;
        long long int bob = 0;
        bool chance = true;
        for(long long int i = n-1;i>=0;i--){
            if(chance&&arr[i]%2==0){
                alice+=arr[i];
                chance = false;
            }
            else if(chance){
                chance = false;
            }
            else if(!chance&&arr[i]%2==1){
                bob+=arr[i];
                chance = true;
            }
            else if(!chance){
                chance = true;
            }
        }
        if(alice>bob){
            cout<<"Alice"<<endl;
        }
        else if(alice==bob){
            cout<<"Tie"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}