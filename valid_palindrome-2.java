class Solution {
    public boolean validPalindrome(String s) {
        
        for(int i=0;i<s.length();i++){
            int start=0;
            int end=s.length()-1;
            while(start<end){
                if(start==i){
                     start++; break;
                }
                if(end==i){
                    end--; break;
                }
                if(s.charAt(start)!=s.charAt(end)){
                    break;
                }
                start++;
                end--;
            }
            if(start>=end){
                return true;
            }
        }
        return false;
    }
}