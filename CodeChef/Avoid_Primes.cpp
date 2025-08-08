#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void solve(){
    ll n;
    cin >> n;

    if(n == 1){
        cout << 1 << endl;
        return;
    }
    if(n == 2){
        cout << "1 2\n";
        return;
    }
    if(n == 3){
        cout << "2 1 3\n";
        return;
    }

    vector<ll> ans(n);
    ans[0]=2;
    ans[1]=1;
    ans[2]=3;
    for(int i=3;i<n;i++){
        ans[i] =i+1;
        if(isPrime(ans[i])){
            swap(ans[i-1],ans[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
