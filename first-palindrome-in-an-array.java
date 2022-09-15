class Solution {
    public String firstPalindrome(String[] words) {
        for(String word : words){
            int flag=1;
            for(int i=0,j=word.length()-1;i<j;i++,j--){
                if(word.charAt(i)!=word.charAt(j)){
                    flag=0;
                }
            }
            if(flag==1)
                return word;
        }
        return "";
    }
}