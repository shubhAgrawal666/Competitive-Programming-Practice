#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int count = 0;
        int front = 1;
        int back = 0;
        while(front<n&&back<n){
            if(arr[front]>=0){
                front++;
            }
            if(arr[back]<=0){
                back++;
            }
            if(arr[front]<0&&arr[back]>0&&front<n&&back<n){
                if(abs(arr[front])<=abs(arr[back])){
                    arr[back] = arr[back]+arr[front];
                    arr[front] = 0;
                }
                else{
                    arr[front] = arr[front]+arr[back];
                    arr[back] = 0;
                }
            }
            if(back>=front&&back<=n-1){
                front = back+1;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]>0){
                count+=arr[i];
            }
            else if(arr[i]<0){
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}