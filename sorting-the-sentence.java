class Solution {
    public String sortSentence(String s) {
        String[] words=new String[10];
        int k;
        String res="",temp="";
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)<='9' && s.charAt(i)>='1'){
                words[s.charAt(i)-'0']=temp;
                temp="";
            }
            else if(s.charAt(i)!=' '){
                temp+=s.charAt(i);
            }
        }
        
        for(int i=1;i<words.length;i++){
            if(words[i]!=null){
                if(i+1<words.length){
                    if(words[i+1]!=null){
                        res+=words[i]+ " ";
                    }
                    else{
                        res+=words[i];
                    }
                }
                else{
                    res+=words[i];
                }
            }
        }
        return res;
    }
}