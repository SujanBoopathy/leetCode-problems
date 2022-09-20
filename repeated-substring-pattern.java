class Solution {
    public boolean repeatedSubstringPattern(String s) {
        for(int i=1;i<=s.length()/2;i++){
            String temp=s.substring(0,i);
            int flag=0;
            for(int j=0;j<s.length();j+=i){
                if(j+i<=s.length() && temp.equals(s.substring(j,j+i))){
                    continue;
                }
                else{
                    flag=1;
                }
            }
            if(flag==0){
                return true;
            }
        }
        return false;
    }
}