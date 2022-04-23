class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto pair:m){
            if(pair.second>n/2){
                return pair.first;
            }
        }
        return -1;
    }
};