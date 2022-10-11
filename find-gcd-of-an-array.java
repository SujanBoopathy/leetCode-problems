class Solution {
    public int gcd(int a,int b){
        if(b==0)
            return a;
        else
            return gcd(b,a%b);
    }
    public int findGCD(int[] nums) {
        int min=Integer.MAX_VALUE,max=Integer.MIN_VALUE;
        for(int i:nums){
            if(i<min){
                min=i;
            }
            if(i>max){
                max=i;
            }
        }
        return gcd(max,min);
    }
}
