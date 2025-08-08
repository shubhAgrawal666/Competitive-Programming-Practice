#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(5);
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    int num1 = 0;
    int num1c = 0;
    int num2 = 0;
    int num2c = 0;
    for(int i=0;i<=4;i++){
        if(num1==0){
            num1 = arr[i];
            num1c++;
            continue;
        }
        if(num2==0&&arr[i]!=num1){
            num2 = arr[i];
            num2c++;
            continue;
        }
        if(arr[i]==num1){
            num1c++;
        }
        else if(arr[i]==num2){
            num2c++;
        }
    }
    if((num1c==3&&num2c==2)||(num1c==2&&num2c==3)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}