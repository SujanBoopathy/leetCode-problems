class Solution {
    public int lengthOfLastWord(String s) {
        String ss[]=s.split(" ");
        String l=ss[ss.length-1];
        return l.length();
        
    }
}