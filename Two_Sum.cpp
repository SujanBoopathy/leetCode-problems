class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> res;
        
        for(int i=0;i<nums.size();i++){
            int compliment=target-nums[i];
            if(m.find(compliment)!=m.end()){
                return {m.find(compliment)->second,i};
            }
            m.insert(pair<int,int>(nums[i],i));
        }
        return res;
    }
};