class Solution {
    public int maxSubArray(int[] nums) {
        int sum=0,maxSum=nums[0];
        for(int i=0;i<nums.length;i++){
            sum=sum+nums[i];
            if(sum<0){
                sum=0;
            }
            else if(maxSum<sum){
                maxSum=sum;
            }
        }
        return maxSum;
    }
    
}