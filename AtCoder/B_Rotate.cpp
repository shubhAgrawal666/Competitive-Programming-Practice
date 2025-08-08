#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(n));
    for(int i = 0;i<n;i++){
        string st;
        cin>>st;
        for(int j=0;j<n;j++){
            vec[i][j] = st[j]-'0';
        }
    }
    int i = n-1,j = n-1;
    int count = 0;
    int temp = vec[n-1][n-1];
    while(count!=4*(n-1)){
        while(i>0){
            vec[i][j] = vec[i-1][j];
            i--;
            count++;
        }
        while(j>0){
            vec[i][j] = vec[i][j-1];
            j--;
            count++;
        }
        while(i<n-1){
            vec[i][j] = vec[i+1][j];
            i++;
            count++;
        }
        while(j<n-1){
            vec[i][j] = vec[i][j+1];
            j++;
            count++;
        }
    }
    vec[n-1][n-2]=temp;
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j];
        }
        cout<<endl;
    }
    return 0;
}