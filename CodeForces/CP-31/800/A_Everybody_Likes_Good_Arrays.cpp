#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int ans = 0;
        for(int i=0;i<=(n-2);i++){
            if((arr[i]%2)==(arr[i+1]%2)){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}