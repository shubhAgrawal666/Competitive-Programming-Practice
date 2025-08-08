#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        vector<string> arr(10);
        for(int i=0;i<10;i++){
            cin>>arr[i];
        }
        int ans = 0;
        for(int k = 0;k<=4;k++){
            for(int i = 0;i<10;i++){
                for(int j=0;j<10;j++){
                    if(i==k&&j>=k&&j<=9-k||i==9-k&&j>=k&&j<=9-k||j==k&&i>=k&&i<=9-k||j==9-k&&i>=k&&i<=9-k){
                        if(arr[i][j]=='X'){
                            ans+=k+1;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}