#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin>>n;
    vector<long long int> arr(n);
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int count = 0;
    for(long long int i=0;i<arr.size()-1;i++){
        if(gcd(arr[i],arr[i+1])!=1){
            arr.insert(arr.begin()+i+1,1);
            count++;
        }
    }
    cout<<count<<endl;
    for(auto ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}