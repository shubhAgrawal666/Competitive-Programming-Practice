#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string q;
    cin>>q;
    for(int i=1;i<=t;i++){
        int ptr1 = 0;
        int ptr2 = 1;
        while(ptr1<n&&ptr2<n){
            if(q[ptr1]=='B'&&q[ptr2]=='G'){
                q[ptr1]='G';
                q[ptr2]='B';
                ptr1+=2;
                ptr2+=2;
            }
            else if(q[ptr1]=='B'&&q[ptr2]=='B'){
                ptr1+=1;
                ptr2+=1;
                continue;
            }
            while(ptr2<n&&ptr1<n&&q[ptr1]!='B'){
                ptr1++;
                ptr2++;
            }
        }
    }
    cout<<q<<endl;
    return 0;
}