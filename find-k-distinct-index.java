class Solution {
    public int performModule(int x){
        if(x<0){
            return x*-1;
        }
        else{
            return x;
        }
    }
    public List<Integer> findKDistantIndices(int[] nums, int key, int k) {
        List<Integer> lst=new ArrayList<>();
        List<Integer> res=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(nums[i]==key){
                lst.add(i);
            }
        }
        for(Integer num : lst){
            for(int i=0;i<nums.length;i++){
                if(performModule(i-num)<=k){
                    if(!res.contains(i)){
                        res.add(i);
                    }
                }
            }
        }
        return res;
    }
}