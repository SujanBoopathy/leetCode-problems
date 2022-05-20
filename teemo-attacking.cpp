class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(duration==0)
            return 0;
        int ans=0;
        for(int i=0;i+1<timeSeries.size();i++){
            ans+=min(duration,timeSeries[i+1]-timeSeries[i]);
        }
        return ans+duration;
    }
};