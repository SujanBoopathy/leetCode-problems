class Solution {
    public int searchInsert(int[] nums, int data) {
        int mid,l=0;
        int r=nums.length-1;
        
        while(l<r){
            mid=(l+r)/2;
            if(nums[mid]==data)
                return mid;
            else if(nums[mid]<data){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return -1;
    }
}