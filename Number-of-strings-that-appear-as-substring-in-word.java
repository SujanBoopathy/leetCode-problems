class Solution {
    public int numOfStrings(String[] patterns, String word) {
        int count=0;
        for(String s : patterns){
            for(int i=0;i<word.length()-s.length()+1;i++){
                if(word.substring(i,i+s.length()).equals(s)){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
}
