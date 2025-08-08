#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ptr1 = 0;
        int ptr2 = k-1;
        int cnt = 0;
        for(int i=ptr1;i<=ptr2;i++){
            if(s[i]=='B'){
                cnt++;
            }
        }
        if(cnt>=k){
            cout<<0<<endl;
            continue;
        }
        int ans = min(n,k-cnt);
        while(ptr2<s.size()){
            ans=min(ans,k-cnt);
            cnt-=((s[ptr1]=='B')?1:0);
            ptr1++;
            ptr2++;
            cnt+=((s[ptr2]=='B')?1:0);
        }
        cout<<ans<<endl;
    }
    return 0;
}