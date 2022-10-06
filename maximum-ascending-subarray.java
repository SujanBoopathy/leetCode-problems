class Solution {
    public int maxAscendingSum(int[] nums) {
        if(nums.length==1)
            return nums[0];
        int maxSum=0;
        for(int i=1;i<nums.length;i++){
            int j=i;
            int sum=nums[j-1];
            while(j<nums.length && nums[j]>nums[j-1]){
                sum+=nums[j];
                j++;
            }
            if(sum>maxSum)
                    maxSum=sum;
            i=j;
        }
        return maxSum;
    }
}
