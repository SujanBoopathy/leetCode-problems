class Solution {
    public int[] numberOfPairs(int[] nums) {
        int pair=0,rem=0;
        Map<Integer,Integer> mp=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(mp.containsKey(nums[i])){
                mp.put(nums[i],mp.get(nums[i])+1);
            }
            else{
                mp.put(nums[i],1);
            }
        }
        for(Integer m:mp.keySet()){
            pair+=mp.get(m)/2;
            rem+=mp.get(m)%2;
        }
        int res[]=new int[2];
        res[0]=pair;
        res[1]=rem;
        return res;
    }
}