class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(n+1,0);
        for(int i=0;i<n;i++){
            if(nums[i]>n)
                freq[n]++;
            else
                freq[nums[i]]++;
        }
        for(int i=n-1;i>=0;i--){
            freq[i]+=freq[i+1];
        }
        for(int i=0;i<=n;i++){
            if(i==freq[i])
                return i;
        }
        return -1;
    }
};