class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        else if(n==1 || n==4)
            return true;
        while(n>1){
            if(n%4!=0)
                return false;
            else
                n/=4;
        }
        return true;
         
    }
};