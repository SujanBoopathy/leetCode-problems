class Solution {
    public int[] productExceptSelf(int[] nums) {
        int product;
        int a[]=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            product=1;
            for(int j=0;j<nums.length;j++){
                if(i!=j){
                  product*=nums[j];
                }

            }
            a[i]=product;
        }
        return a;
    }
}