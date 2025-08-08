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
        set<int> st;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            st.insert(x);
        }
        int ans = 0;
        while(!st.empty()){
            int val = *st.rbegin();
            st.erase(val);
            if(val%2==0){
                st.insert(val/2);
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}