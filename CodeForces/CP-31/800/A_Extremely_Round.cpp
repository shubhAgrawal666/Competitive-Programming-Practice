#include<bits/stdc++.h>
using namespace std;
int func(int n){
    int count = 0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
}
long long int power(long long int n,int p){
    int ans = 1;
    for(int i=1;i<=p;i++){
        ans*=n;
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        if(n>=1&&n<=9){
            cout<<n<<endl;
        }
        else{
            count = 9;
            int x = func(n);
            for(int i=1;i<x;i++){
                int start = power(10,i);
                int end = power(10,i+1);
                count+=min(end,n)/start;
                if(min(end,n)==end){
                    count--;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}