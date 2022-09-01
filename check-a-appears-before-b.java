class Solution {
    public boolean checkString(String s) {
        int i=0,flag=1;
        for(i=0;i<s.length();i++){
            if(s.charAt(i)=='b'){
                flag=1;
                break;
            }
        }
        for(;i<s.length();i++){
            if(s.charAt(i)=='a')
                return false;
        }
        return true;
    }
}