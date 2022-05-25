class Solution {
    public boolean isMonotonic(int[] nums) {
        
        if(nums[0]-nums[nums.length-1]<0){
            for(int i=0;i+1<nums.length;i++){
                if(nums[i]>nums[i+1]){
                    return false;
                }
            }
        }
        
        return true;
    }
}