class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        for(int i=0;i<=31&&(a!=0||b!=0||c!=0);i++){
            int t = (1LL<<i);
            if((a&t)!=0&&(b&t)!=0){
                if((c&t)==0){
                    ans+=2;
                }
                a = (a^t);
                b = (b^t);
            }
            else if((a&t)!=0||(b&t)!=0){
                if((c&t)==0){
                    ans+=1;
                }
                if(a&1){
                    a = (a^t);
                }
                if(b&1){
                    b = (b^t);
                }
            }
            else{
                if((c&t)!=0){
                    ans+=1;
                }
            }
        }
        return ans;
    }
};