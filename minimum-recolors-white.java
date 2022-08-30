class Solution {
    public int countWhite(String s){
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='W')
                count++;
        }
        return count;
    }
    public int minimumRecolors(String blocks, int k) {
        if(blocks.length()==k){
            return countWhite(blocks);
        }
        int min=Integer.MAX_VALUE;
        for(int i=0;i<blocks.length()-k+1;i++){
            int temp=countWhite(blocks.substring(i,i+k));
            if(min>temp){
                min=temp;
            }
        }
        return min;
    }
}