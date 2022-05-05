class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         return nums[i];
        //     }
        // }
         unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto& pair:mp){
            if(pair.second>1)
                return pair.first;
        }
        return 0;
        return 0;
    }
};