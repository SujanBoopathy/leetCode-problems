class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int minimumCost=0;
        for(int i=0;i<cost.length;){
            if(i==0){
                minimumCost+=cost[i];
            }
            if(i==cost.length-1){
                break;
            }
            if(i+2<cost.length){
                if(cost[i+1]<cost[i+2]){
                    minimumCost+=cost[i+1];
                    i++;
                }
                else{
                    minimumCost+=cost[i+2];
                    i+=2;
                }
            }
            else{
                break;
            }
        }
        int minimumCost2=0;
        for(int i=1;i<cost.length;){
            if(i==1){
                minimumCost2+=cost[i];
            }
            if(i==cost.length-1){
                break;
            }
            if(i+2<cost.length){
                if(cost[i+1]<cost[i+2]){
                    minimumCost2+=cost[i+1];
                    i++;
                }
                else{
                    minimumCost2+=cost[i+2];
                    i+=2;
                }
            }
            else{
                break;
            }
        }
        if(minimumCost2<minimumCost)
            return minimumCost2;
        return minimumCost;
    }
}