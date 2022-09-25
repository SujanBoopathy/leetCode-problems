class Solution {
    public boolean checkIfPangram(String sentence) {
        int character[]=new int[26];
        for(int i=0;i<sentence.length();i++){
            character[sentence.charAt(i)-'a']++;
        }
        for(int i=0;i<26;i++){
            if(character[i]==0)
                return false;
        }
        return true;
    }
}