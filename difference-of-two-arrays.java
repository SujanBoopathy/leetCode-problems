class Solution {
    public List<Integer> findDif(int[] n1,int[] n2){
        List<Integer> lst=new ArrayList<>();
        for(int i=0;i<n1.length;i++){
            int flag=0;
            for(int j=0;j<n2.length;j++){
                if(n2[j]==n1[i]){
                    flag=1;
                }
            }
            if(flag!=1 && !lst.contains(n1[i])){
                lst.add(n1[i]);
            }
        }
        return lst;
    }
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        List<List<Integer>> res=new ArrayList<>();
        res.add(findDif(nums1,nums2));
        res.add(findDif(nums2,nums1));
        return res;
    }
}