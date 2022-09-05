class Solution {
    public int mostFrequent(int[] nums, int key) {
        Map<Integer,Integer> mp=new HashMap<>();
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]==key){
                if(mp.containsKey(nums[i+1])){
                    mp.put(nums[i+1],mp.get(nums[i+1])+1);
                }
                else{
                    mp.put(nums[i+1],1);
                }
            }
        }
        int result=0,count=0;
        for(Integer i:mp.keySet()){
            if(mp.get(i)>count){
                result=i;
                count=mp.get(i);
            }
        }
        return result;
    }
}