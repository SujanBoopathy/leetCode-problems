class Solution {
    public int sumBase(int n, int k) {
        List<Integer> lst=new ArrayList<>();
        while(n>=k){
            lst.add(n%k);
            n/=k;
        }
        lst.add(n);
        int result=0;
        for(Integer i:lst){
            result+=i;
        }
        return result;
    }
}
