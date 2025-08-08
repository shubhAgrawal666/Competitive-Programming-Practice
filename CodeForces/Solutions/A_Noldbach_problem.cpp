#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    vector<int> vec;
    for(int i=2;i<=1000;i++){
        if(isPrime(i)){
            arr.push_back(i);
        }
    }
    for(int i=0;i<arr.size()-1;i++){
        vec.push_back(arr[i]+arr[i+1]+1);
    }
    int count = 0;
    // for(auto ele:vec){
    //     cout<<ele<<" ";
    // }
    for(int i=0;i<vec.size();i++){
        if(isPrime(vec[i])==true&&(vec[i]<=n)){
            count++;
        }
        else{
            break;
        }
    }
    if(count>=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}