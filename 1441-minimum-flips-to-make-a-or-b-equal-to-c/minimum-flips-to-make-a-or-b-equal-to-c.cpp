class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        for(int i=31;i>=0;i--){
            int t = (1LL<<i);
            if((a&t)!=0&&(b&t)!=0){
                if((c&t)==0){
                    ans+=2;
                }
            }
            else if((a&t)!=0||(b&t)!=0){
                if((c&t)==0){
                    ans+=1;
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