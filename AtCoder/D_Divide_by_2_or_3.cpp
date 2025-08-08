#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin>>n;
    vector<long long int> arr(n);
    int temp = 0;
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
        temp = gcd(temp,arr[i]);
    }
    long long int count = 0;
    for(long long int i=0;i<n;i++){
        long long int ans = arr[i]/temp;
        while(ans%2==0){
            ans=ans/2;
            count++;
        }
        while(ans%3==0){
            ans=ans/3;
            count++;
        }
        if(ans!=1){
            cout<<-1;
            return 0;
        }
    }
    cout<<count;
    return 0;
}