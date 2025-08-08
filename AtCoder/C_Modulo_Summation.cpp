#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int sum = 0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        sum+=temp-1;
    }
    cout<<sum;
    return 0;
}