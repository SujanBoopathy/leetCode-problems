class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0,m2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                m=0;
            else
                m++;
            m2=max(m2,m);
        }
        return m2;
    }
};