class Solution {
    public int removeDuplicates(int[] nums) {
        if(nums.length==0 || nums==null)
            return 0;
        int len=0;
        for(int i=0;i<nums.length;i++){
            if(i==0 || i==1 ){
                nums[len++]=nums[i];
            }
            else{
             if(nums[i]==nums[len-1] && nums[i]==nums[len-2]){
                continue;
              }
              else{
                  nums[len]=nums[i];
                len++;
              }
            }
        }
        return len;
    }
}