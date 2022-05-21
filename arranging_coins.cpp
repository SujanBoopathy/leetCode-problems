class Solution {
public:
    int arrangeCoins(int n) {
        for(int i=1;n>0;i++){
            if(n>=i){
                count++;
                n-=i;
            }
            else 
                break;
        }
        return count;
    }
};