class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        for(int i=0;i<nums.size();i++){
            vector<int>v1,v2;
            v1.push_back(nums[i]);
            v2.push_back(nums[i]);
            for(int j=0;j<nums.size();j++){
                if(nums[i]!=nums[j]){
                    v1.push_back(nums[j]);
                }
            }
            for(int k=nums.size()-1;k>=0;k--){
                if(nums[k]!=nums[i]){
                    v2.push_back(nums[k]);
                }
            }
            v.push_back(v1);
            v.push_back(v2);
        }
        return v;
    }
};