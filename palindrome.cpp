class Solution {
public:
    bool isPalindrome(int x) {
        long int x1=x;
        if(x<0){
            return false;
        }
        long int rev=0,rem=0;
        while(x>0){
            rem=x%10;
            rev=(rev*10)+rem;
            x/=10;
        }
        if(rev==x1){
            return true;
        }
        else{
            return false;
        }
    }
};