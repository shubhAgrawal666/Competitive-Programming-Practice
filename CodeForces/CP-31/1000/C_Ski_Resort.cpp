#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin >> n >> k >> q;
        vector<int> a(n);
        vector<int> b;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]<=q){
                b.push_back(i+1);
            }
        }
        if(b.size()!=0){
            int start = 0;
            int end = start + k - 1;
            if(end >= b.size()) {
                cout << 0 << endl;
                continue;
            }
            else{
                long long int ans = 0;
                long long int cnt = 1;
                for(int i = 0;i<b.size()-1;i++){
                    if(b[i+1]==b[i]+1){
                        cnt++;
                    }
                    else{
                        if(cnt>=k){
                            ans+=((cnt-k+1)*(cnt-k+2))/2;
                            cnt = 1;
                        }
                        else{
                            cnt = 1;
                        }
                    }
                }
                if(cnt>=k){
                    ans+=((cnt-k+1)*(cnt-k+2))/2;
                }
                cout << ans << endl;
            }
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}