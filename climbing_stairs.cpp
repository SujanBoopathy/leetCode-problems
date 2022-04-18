class Solution {
public:
    int climbStairs(int n) {
        if(n<3){
            return n;
        }
        int oneBefore=1;
        int twoBefore=2;
        int result;
        for(int i=3;i<=n;i++){
            result=oneBefore+twoBefore;
            oneBefore=twoBefore;
            twoBefore=result;
        }
        return result;
    }
};