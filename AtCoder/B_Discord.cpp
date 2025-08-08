#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int r;
    int c;
    cin>>c>>r;
    vector<vector<int>> arr(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int count = 0;
    for(int i=1;i<=c-1;i++){
        for(int j=i+1;j<=c;j++){
            bool isNear = false;
            for(int x = 0;x<r;x++){
                for(int y = 0;y<c-1;y++){
                    if((arr[x][y]==i&&arr[x][y+1]==j)||(arr[x][y]==j&&arr[x][y+1]==i)){
                        isNear = true;
                        break;
                    }
                }
                if(isNear==true){
                    break;
                }
            }
            if(isNear){
                count++;
            }
        }
    }
    cout<<((c*(c-1))/2)-count<<endl;
    return 0;
}