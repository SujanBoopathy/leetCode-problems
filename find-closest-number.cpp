class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int res;
        int close=abs(nums[0]);
        for(int i=0;i<nums.size();i++){
            if(close>=abs(nums[i])){
                close=abs(nums[i]);
                res=nums[i];
            }
        }
        if(res<0){
            for(int i=0;i<nums.size();i++){
                if(abs(res)==nums[i])
                    return nums[i];
            }
        }
        return res;
    }
};