class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count[30000]={0};
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(int i=0;i<30000;i++){
            if(count[i]==1)
                return i;
        }
        return 0;
    }
};