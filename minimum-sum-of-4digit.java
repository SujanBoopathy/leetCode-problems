class Solution {
    public int minimumSum(int n) {
        int a[]=new int[4];
        for(int i=0;n>0;i++){
            a[i]=n%10;
            n/=10;
        }
        Arrays.sort(a);
        int sum=((a[0]*10)+a[3])+((a[1]*10)+a[2]);
        return sum;
    }
}