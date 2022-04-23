class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int len=nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[len-1]!=nums[len-2])
            return nums[len-1];
       for(int i=1;i<nums.size();i++){
           if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
               return nums[i];
           }
       }
        return 0;
    }
};