class Solution {
    public boolean strongPasswordCheckerII(String password) {
        if(password.length()<8){
            return false;
        }
        int lc=0,uc=0,digit=0,sc=0;
        for(int i=0;i<password.length();i++){
            if(password.charAt(i)>='a' && password.charAt(i)<='z' ){
                lc=1;
            }
            else if(password.charAt(i)>='A' && password.charAt(i)<='Z' ){
                uc=1;
            }        
            else if(password.charAt(i)>='0' && password.charAt(i)<='9' ){
                digit=1;
            }
            else{
                sc=1;
            }
            if(i<password.length()-1){
                if(password.charAt(i)==password.charAt(i+1))
                    return false;
            }
        }
        if(lc==1 && uc==1 && sc==1 && digit==1)
            return true;
        return false;
    }
}