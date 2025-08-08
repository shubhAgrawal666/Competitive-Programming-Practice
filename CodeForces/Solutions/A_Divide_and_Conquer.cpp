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
        int count = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==1){
                count++;
            }
        }
        int ans = INT_MAX;
        if(count%2==0){
            cout<<0<<endl;
            continue;
        }
        else{
            for(int i=0;i<n;i++){
                int count1 = 0;
                if((arr[i])%4==1){
                    ans = 1;
                    break;
                }
                else if(arr[i]%2==0){
                    while(arr[i]%2==0){
                        arr[i]=arr[i]/2;
                        count1++;
                    }
                }
                else if(arr[i]%4==3){
                    while((arr[i]%2)!=0){
                        arr[i]=arr[i]/2;
                        count1++;
                    }
                }
                ans=min(ans,count1);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}