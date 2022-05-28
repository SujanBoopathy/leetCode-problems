class Solution {
    public boolean valid(String s,int left,int right){
        while(left<right){
            if(s.charAt(left)!=s.charAt(right))
                return false;
            left++;
            right--;
        }
        return true;
    }
    public boolean validPalindrome(String s) {
        int left=0;
        int right=s.length()-1;
        while(left<right-1){
            if(s.charAt(left)!=s.charAt(right)){
                if(valid(s,left+1,right))
                    return true;
                if(valid(s,left,right-1)){
                    return true;
                }
                return false;
                    
            }
            else{
                left++;
                right--;
            }
        }
        return true;
    }
}