class Solution {
public:
    double calculate(vector<int> v,int k,int start){
        double r=0.0;
        for(int i=start;k>0;k--){
            r+=v[i];
        }
        return r/k;
    }
    double findMaxAverage(vector<int>& nums, int k) {
        double res=0.0;
        for(int i=0;i<nums.size()-k;i++){
            res=max(res,calculate(nums,k,i));
        }
        return res;
    }
};