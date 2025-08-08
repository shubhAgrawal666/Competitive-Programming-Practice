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
        vector<long long int> arr;
        int ans = 0;
        int count = 0;
        for(long long int i=1;i<=n;i++){
            if(n%i==0){
                arr.push_back(i);
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}