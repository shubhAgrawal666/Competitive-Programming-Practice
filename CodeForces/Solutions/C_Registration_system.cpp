#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<string> arr(n);
    map<string,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(mp.count(arr[i])==0){
            mp[arr[i]]++;
            cout<<"OK"<<endl;
        }
        else{
            mp[arr[i]]++;
            arr[i]+=to_string(mp[arr[i]]-1);
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}
14 5
13 12
19 17 10
18