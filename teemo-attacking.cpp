class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int t=0,count=0;
        for(int i=0;i<timeSeries.size();i++){
            if(t<timeSeries[i]){
                t=timeSeries[i]+duration-1;
                count+=duration;
            }
            else{
                t=timeSeries[i]+duration-1;
                count+=duration-(t-timeSeries[i]+1);
            }
        }
        return count;
    }
};