class Solution {
    public String greatestLetter(String s) {
        int upper[]=new int[26];
        int lower[]=new int[26];
        
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>='a' && s.charAt(i)<='z'){
                lower[s.charAt(i)-'a']++;
            }
            else if(s.charAt(i)>='A' && s.charAt(i)<='Z'){
                upper[s.charAt(i)-'A']++;
            }
        }
        String res="";
        for(int i=25;i>=0;i--){
            if(upper[i]>0 && lower[i]>0){
                res=Character.toString(65+i);
                break;
            }
        }
        return res;
    }
}