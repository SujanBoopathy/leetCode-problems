class Solution {
    public int rearrangeCharacters(String s, String target) {
        int count=0;
        int charCount[]=new int[26];
        int targetCount[]=new int[26];
        for(int i=0;i<s.length();i++){
            charCount[s.charAt(i)-'a']++;
        }
        for(int i=0;i<target.length();i++){
            targetCount[target.charAt(i)-'a']++;
        }
        
    }
}