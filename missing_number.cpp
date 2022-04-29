class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]!=0) return 0;
        if(nums.size()==1){
            if(nums[0]==1) return 0;
            else if(nums[0]==0) return 1;
        }
        int m=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(m<nums[i])
                m=nums[i];
        }
        int n=(m*(m+1))/2;
        
        if(n==sum) return m+1;
        return n-sum;
    }
};