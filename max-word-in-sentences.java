class Solution {
    public int mostWordsFound(String[] sentences) {
        int result=0;
        for(String s: sentences){
            int count=0;
            for(int i=0;i<s.length();i++){
                if(s.charAt(i)==' '){
                    count++;
                }
            }
            if(count+1>result){
                result=count+1;
            }
        }
        return result;
    }
}