class Solution {
    public boolean checkEven(int x){
        int sum=0;
        while(x>0){
            sum+=x;
            x/=10;
        }
        if(sum%2==0)
            return true;
        else
            return false;
    }
    public int countEven(int num) {
        int count=0;
        if(num<2)
            return 0;
        for(int i=2;i<=num;i++){
            if(checkEven(i)){
                count++;
            }
        }
        return count;
    }
}