class Solution {
    public int isPrefixOfWord(String sentence, String searchWord) {
        String temp="";
        int count=1;
        for(int i=0;i<sentence.length();i++){
            if(sentence.charAt(i)==' '){
                if(temp.equals(searchWord)){
                    return count;
                }
                count++;
                temp="";
            }
            else{
                temp+=sentence.charAt(i);
                if(temp.equals(searchWord)){
                    return count;
                }
            }
        }
        return -1;
    }
}
