class Solution {
    public int findLHS(int[] nums) {
        Map<Integer,Integer> map=new HashMap<>();
        for(int n:nums){
            if(!map.containsKey(n)){
                map.put(n,1);
            }
            else{
                map.put(n,map.get(n)+1);
        }
        int maxValue=0;
         
        return maxValue;
    }
}