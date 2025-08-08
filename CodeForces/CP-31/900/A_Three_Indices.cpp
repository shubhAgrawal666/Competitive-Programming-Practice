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
        vector<int> a(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]] = i;
        }
        bool flag = false;
        for(int i=n;i>=3;i--){
            int x = mp[i];
            int l = x-1;
            int r = x+1;
            while(l>=0&&r<n){
                if(a[l]>i&&l>=0&&r<n){
                    l--;
                }
                if(a[r]>i&&l>=0&&r<n){
                    r++;
                }
                if(a[l]<i&&a[r]<i&&l>=0&&r<n){
                    cout<<"YES"<<endl;
                    cout<<l+1<<" "<<x+1<<" "<<r+1<<endl;
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag==false){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}