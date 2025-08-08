#include<bits/stdc++.h>
using namespace std;
int HtoM(int H,int M){
    return (H*60)+M;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,H,M;
        cin>>n>>H>>M;
        int time1 = HtoM(H,M);
        int min = INT_MAX;
        for(int i=1;i<=n;i++){
            int H1,M1;
            cin>>H1>>M1;
            int time2 = HtoM(H1,M1);
            if(time2>=time1){
                if(time2-time1<min){
                    min = time2-time1;
                }
            }
            else{
                if(1440+time2-time1<min){
                    min = time2-time1+1440;
                }
            }
        }
        cout<<min/60<<" "<<min%60<<endl;
    }
    return 0;
}