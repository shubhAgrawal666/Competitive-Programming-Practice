#include<bits/stdc++.h>
using namespace std;
bool IsGood(int n){
    string st = to_string(n);
    for(int i=0;i<st.size();i++){
        for(int j=i;j<st.size();j++){
            if(st[i]==st[j]&&i!=j){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    n++;
    while(!IsGood(n)){
        n++;
    }
    cout<<n<<endl;
    return 0;
}