class Solution {
    public int mostFrequentEven(int[] nums) {
        Map<Integer,Integer> map=new HashMap<>();
        int minValue=Integer.MIN_VALUE;
        int min=Integer.MAX_VALUE;
        for(int i: nums){
            if(i%2==0){
                if(map.containsKey(i)){
                    map.put(i,map.get(i)+1);
                }
                else{
                    map.put(i,1);
                }
            }
        }
        if(map.isEmpty())
            return -1;
        for(Integer i : map.keySet()){
            System.out.println(i+" "+map.get(i));
            if(minValue<map.get(i)){
                minValue=map.get(i);
                min=i;
            }
            else if(minValue==map.get(i) && min>i){
                min=i;
            }
        }
        return min;
    }
}