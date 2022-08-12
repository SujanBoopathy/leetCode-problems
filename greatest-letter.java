class Solution {
    public String greatestLetter(String s) {
        int count[]=new int[26];
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                if(s.charAt(i)==s.charAt(j)+32){
                    count[s.charAt(i)-'a']++;
                }
                else if(s.charAt(i)==s.charAt(i)-32){
                    count[s.charAt(i)-'a']++;
                }
            }
        }
        String res="";
        for(int i=25;i>=0;i--){
            if(count[i]>0){
                int c='A'+i;
                char c2=c;
                res=(String)c2;
            }
                
        }
        return res;
    }
}