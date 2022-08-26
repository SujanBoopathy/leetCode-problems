class Solution {
    public String reverseStr(String s){
        String res="";
        for(int i=s.length()-1;i>=0;i--){
            res+=s.charAt(i);
        }
        return res;
    }
    public String reversePrefix(String word, char ch) {
        String res="";
        int flag=0;
        for(int i=0;i<word.length();i++){
            if(word.charAt(i)==ch){
                res+=reverseStr(word.substring(0,i+1))+word.substring(i+1,word.length());
                flag=1;
                break;
            }
        }
        if(flag==1)
            return res;
        else
            return word;
    }
}