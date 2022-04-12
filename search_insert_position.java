class Solution {
    public int searchInsert(int[] nums, int data) {
        int n=nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]>=data){
                return i;
            }
        }
        return n;
    }
}