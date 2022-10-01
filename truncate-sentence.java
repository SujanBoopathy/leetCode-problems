class Solution {
    public String truncateSentence(String s, int k) {
        String res="",temp="";
        int count=0;
        for(int i=0;i<s.length();i++){
            if(count!=k && s.charAt(i)==' '){
                count++;
                if(count==k){
                    res+=temp;
                }
                else{
                    res+=temp+" ";
                }
                temp="";
            }
            else{
                temp+=s.charAt(i);
            }
        }
        if(k!=count){
            res+=temp;
        }
        return res;
    }
}