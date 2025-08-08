#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> arr(n,0);
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int back = 0;
        long long int front = 1;
        long long int count = 0;
        while(back<n&&front<n){
            if(arr[back]==0){
                back++;
            }
            if(arr[front]!=0){
                front++;
            }
            if(back>=front&&back<=n-2){
                front = back+1;
            }
            if(arr[back]!=0&&arr[front]==0&&back<n&&front<n){
                arr[back]--;
                arr[front]++;
                if(front<=n-2){
                    front++;
                }
                if(arr[back]==0){
                    back++;
                }
                count++;
            }
        }
        for(long long int i = 0;i<=n-2;i++){
            if(arr[i]!=0){
                count+=arr[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}