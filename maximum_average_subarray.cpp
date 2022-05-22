class Solution {
public:
    double calculate(vector<int> v,int k,int start){
        int t=k;
        double res=0;
        for(int i=start;t>0;i++){
            res+=v[i];
            t--;
        }
        return res/k;
    }
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