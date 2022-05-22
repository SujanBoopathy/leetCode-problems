class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=accumulate(nums.begin(),nums.begin()+k,0);
        int max_sum=sum;
        for(int i=k;i<nums.size();i++){
            sum=sum+nums[i]-nums[i-k];
            if(max_sum<sum)
                max_sum=sum;
        }
        return static_cast<double>(max_sum)/k;
    }
};