#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<long long int> arr(n);
    long long int product = 1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            cout<<0<<endl;
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        if(product<=1000000000000000000/arr[i]){
            product*=arr[i];
        }
        else{
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<product<<endl;
    return 0;
}