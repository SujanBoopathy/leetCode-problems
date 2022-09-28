class Solution {
    public int arraySign(int[] nums) {
        int zero=0,negative=0;
        for(int i =0;i< nums.length;i++){
            if(nums[i]==0)
                zero=1;
            else if(nums[i]<0)
                negative++;
        }
        if(zero==1)
            return 0;
        if(negative%2==0)
            return 1;
        else
            return -1;
        
    }
}

