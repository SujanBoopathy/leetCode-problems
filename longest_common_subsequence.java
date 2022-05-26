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
        for(Map.Entry<Integer,Integer> mp:map.entrySet()){
            if(map.containsKey(mp.getKey()+1)){
                int maxTemp=mp.getValue()+map.get(mp.getKey()+1);
                if(maxTemp>maxValue)
                    maxValue=maxTemp;
            }
        }  
        return maxValue;
    }
}