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
        int count1 = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                count++;
            }
            else{
                count1++;
            }
        }
        int sum = count-count1;
        int product = (count1%2==0?1:-1);
        int ans = 0;
        if(sum<0){
            ans+=(count1-count+1)/2;
            if(n%2==0){
                count = count1 = n/2;
            }
            else{
                count = (n+1)/2;
                count1 = (n-1)/2;
            }
            product = (count1%2==0?1:-1);
        }
        if(product==-1){
            ans+=1;
            count1--;
            count++;
        }
        cout<<ans<<endl;
    }
    return 0;
}