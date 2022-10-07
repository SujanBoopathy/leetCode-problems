class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        int count[]=new int[26];
        for(int i=0;i<brokenLetters.length();i++){
            count[brokenLetters.charAt(i)-'a']=1;
        }
        String temp="";
        int res=0,flag=0;
        for(int i=0;i<text.length();i++){
            if(text.charAt(i)==' '){
                if(flag==0){
                    res++;
                }
                else{
                    flag=0;
                }
            }
            else{
                if(count[text.charAt(i)-'a']==1){
                    flag=1;
                }
            }
        }
        if(flag==0)
            res++;
        return res;

    }
}
