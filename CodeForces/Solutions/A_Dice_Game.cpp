#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b;
    cin>>a>>b;
    int wina = 0;
    int winb = 0;
    int draw = 0;
    for(int i=1;i<=6;i++){
        if(abs(i-a)<abs(i-b)){
            wina++;
        }
        else if(abs(i-a)==abs(i-b)){
            draw++;
        }
        else{
            winb++;
        }
    }
    cout<<wina<<" "<<draw<<" "<<winb<<endl;
    return 0;
}