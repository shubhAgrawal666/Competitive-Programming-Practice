#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int w,h,n;
    cin>>w>>h>>n;
    long long int low = 1;
    long long int high = max(h,w)*n;
    // while((long long)(high/w)*(long long)(high/h)<n){
    //     high*=2;
    // }
    long long int ans = 0;
    while(low<=high){
        long long int mid = low+(high-low)/2;
        if((long long)(mid/w)*(long long)(mid/h)>=n){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout<<ans;
    return 0;
}