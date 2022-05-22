class Solution {
public:
    
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()==1){
            return nums[0];
        }
        double res=0.0;
        for(int i=0;i<=nums.size()-k;i++){
            double temp=calculate(nums,k,i);
            if(temp>res){
                res=temp;
            }
        }
        return res;
    }
};