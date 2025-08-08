#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<char>> arr(r,vector<char>(c));
    vector<vector<char>> vec(r,vector<char>(c));
    int hCount = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>vec[i][j];
        }
    }
    for(int s=0;s<r;s++){
        for(int t = 0;t<c;t++){
            bool Done = true;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    if(arr[i][j]!=vec[(i+s)%r][(j+t)%c]){
                        Done = false;
                        break;
                    }
                }
                if(!Done){break;}
            }
            if(Done){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}