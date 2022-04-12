class Solution {
    public int searchInsert(int[] nums, int data) {
        int l=0;
        int r=nums.length-1;
        
        while(l<r){
            int mid=(l+r)/2;
            if(nums[mid]==data)
                return mid;
            else if(nums[mid]<data){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }
}