class Solution {
    public int maxDistance(int[] colors) {
        int max=Integer.MIN_VALUE;
        for(int i=0;i<colors.length;i++){
            for(int j=colors.length-1;j>i;j--){
                if(colors[i]!=colors[j] && Math.abs(i-j)>max){
                    max=Math.abs(i-j);
                }
            }
        }
        return max;
    }
}
