class Solution {
    public boolean check(String str){
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)!=str.charAt(str.length()-i-1)){
                return false;
            }
        }
        return true;
    }
    public boolean validPalindrome(String s) {
        if(check(s) || s.length()<=2)
            return true;
        for(int i=0;i<s.length();i++){
            String temp=s.substring(0,i)+s.substring(i+1,s.length());
            
            if(temp.length()<=2)
                return false;
            if(check(temp)){
                return true;
            }
            
        }
        return false;
    }
}