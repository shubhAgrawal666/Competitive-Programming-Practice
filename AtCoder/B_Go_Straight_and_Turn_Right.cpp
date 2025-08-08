#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string s;
    cin>>n>>s;
    int countR = 0;
    int x = 0;
    int y = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='S'){
            if(countR%4==0){
                x++;
            }
            else if(countR%4==1){
                y--;
            }
            else if(countR%4==2){
                x--;
            }
            else{
                y++;
            }
        }
        else{
            countR++;
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}