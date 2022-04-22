class Solution {
public:
    int reverse(int x) {
        if(x>INT_MAX || x<INT_MIN){
            return 0;
        }
        long rev=0,rem=0,r=-1;
        if(x>=0){
            while(x>0){
                rem=x%10;
                rev=rev*10+rem;
                x/=10;
            }
            if(pow(2,31)<rev) return 0;
            return rev;
        }
        else{
            x*=r;
            while(x>0){
                rem=x%10;
                if(rev*10 > INT_MAX) return 0;
                rev=rev*10+rem;
                x/=10;
            }
            if(pow(2,31)<rev) return 0;
            rev*=r;
            
            return rev;
        }
    }
};