class Solution {
public:
    bool isPerfectSquare(int num) {
        int n=sqrt(num);
        if(num%n==0 && n*n==num)
            return true;
        else
            return false;
    }
};