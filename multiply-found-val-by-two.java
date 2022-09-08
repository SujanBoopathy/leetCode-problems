class Solution {
    
    public int findFinalValue(int[] nums, int search) {
        Set<Integer> set=new HashSet<>();
        for(int i: nums){
            set.add(i);
        }
        while(set.contains(search)){
            search*=2;
        }
        return search;
    }
}