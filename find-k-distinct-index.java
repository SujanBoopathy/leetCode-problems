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
        List<Integer> res=new ArrayList<>();
        for(int i=0,j=0;i<nums.length;i++){
            while(j<nums.length &&( nums[j]!=key || j<i-k))
                j++;
            if(j==nums.length)
                break;
            if(performModule(i-j)<=k)
                res.add(i);
        }
        return res;
    }
}