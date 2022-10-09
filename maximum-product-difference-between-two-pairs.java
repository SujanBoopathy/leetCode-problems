class Solution {
    public int maxProductDifference(int[] nums) {
        Arrays.sort(nums);
        int min=nums[0];
        int smin=nums[1];
        int max=nums[nums.length-1];
        int smax=nums[nums.length-2];
        return (max*smax)-(min*smin);
    }
}
