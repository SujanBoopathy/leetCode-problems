class Solution {
public:
    bool ok(double x, vector <int>& nums, int k){
      int n = nums.size();
      double arr[n];
      for (int i = 0; i < n; i++) {
         arr[i] = nums[i] - x;
      }
      double sum = 0;
      double last = 0;
      for (int i = 0; i < k; i++) {
         sum += arr[i];
      }
      if (sum >= 0)
      return true;
      for (int i = 0, j = k; j < n; i++, j++) {
         last += arr[i];
         sum += arr[j];
         if (last < 0) {
            sum -= last;
            last = 0;
         }
         if (sum >= 0)
         return true;
      }
      return false;
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