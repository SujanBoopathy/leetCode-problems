class Solution {
    public int findLHS(int[] nums) {
        Arrays.sort(nums);
        int start=0,end+0;
        int count=1,maxCount=0;
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            if(count>maxCount){
                maxCount=count;
                
            }
        }
    }
}