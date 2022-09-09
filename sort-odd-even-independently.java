class Solution {
    public void sortArray(int[] nums,int start){
        
    }
    public int[] sortEvenOdd(int[] nums) {
        for(int i=0;i<nums.length;i+=2){
            int min_idex=i;
            for(int j=i;j<nums.length;j+=2){
                if(nums[j]<nums[min_idex]){
                    min_idex=j;
                }
            }
            if(min_idex!=i){
                int temp=nums[i];
                nums[i]=nums[min_idex];
                nums[min_idex]=temp;
            }
        }
        for(int i=1;i<nums.length;i+=2){
            int min_idex=i;
            for(int j=i;j<nums.length;j+=2){
                if(nums[j]>nums[min_idex]){
                    min_idex=j;
                }
            }
            if(min_idex!=i){
                int temp=nums[i];
                nums[i]=nums[min_idex];
                nums[min_idex]=temp;
            }
        }
        return nums;
    }
}