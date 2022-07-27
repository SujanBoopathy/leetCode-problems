class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int res=nums[0],close;
        if(nums[0]<0){
            close=nums[0]*-1;
        }
        else{
            close=nums[0];
        }
        for(int i=0;i<nums.size();i++){
            int temp;
            if(nums[i]<0){
                temp=nums[i]*-1;
            }
            else{
                temp=nums[i];
            }
            if(temp<close)
                res=nums[i];
            
        }
        if(res<0){
            for(int i=0;i<nums.size();i++){
                if(res==(nums[i]*-1)){
                    return nums[i];
                }
            }
        }
        return res;
    }
};