class Solution {
public:
    int checkFactor(int a,int b){
        while(a%b==0){
            a=a/b;
        }
        return a;
    }
    bool isUgly(int n) {
        if(n==0) return false;
        n=checkFactor(n,2);
        n=checkFactor(n,3);
        n=checkFactor(n,5);
        return n==1?true:false;
        
        
        
    }
};