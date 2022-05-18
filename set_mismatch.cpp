class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int chk=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                v.push_back(nums[i]);
            }
            else{
                chk+=nums[i-1];
            }
        }
        chk+=nums[n-1];
        v.push_back(sum-chk);
        return v;
    }
};