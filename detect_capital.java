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
    }
}
