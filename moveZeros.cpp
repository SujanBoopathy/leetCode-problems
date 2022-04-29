class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int k=0;k<nums.size();k++){
            if(nums[k]!=0){
                nums[i++]=nums[k];
            }
        }
        while(i<nums.size()){
            nums[i]=0;
            i++;
        }
    }
};