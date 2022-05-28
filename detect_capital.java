class Solution {
    public boolean detectCapitalUse(String word) {
        char ch=word.charAt(0);
        if(ch<='z' && ch>='a'){
            for(int i=0;i<word.length();i++){
                if(word.charAt(i)<='Z' && word.charAt(i)>='A'){
                    return false;
                }
                
            }
        }
        else if(ch>='A' && ch<='Z'){
            char temp='.';
            if(word.length()>1){
                temp=word.charAt(1);
            }
            if(temp>='A' && temp<='Z'){
                for(int i=0;i<word.length();i++){
                    if(word.charAt(i)<='z' && word.charAt(i)>='a')
                        return false;
                }
            }
            
        }
        return true;
    }
}
