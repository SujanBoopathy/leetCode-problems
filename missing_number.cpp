class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int m=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(m<nums[i])
                m=nums[i];
        }
        int n=(m*(m+1))/2;
        //if(n==1 && sum==1 && nums.size()==1) return 0;
        if(n==sum) return m+1;
        return n-sum;
    }
};