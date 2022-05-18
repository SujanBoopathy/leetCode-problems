class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                v.push_back(nums[i]);
                v.push_back(nums[i]+1);
                break;
            }
        }
        return v;
    }
};