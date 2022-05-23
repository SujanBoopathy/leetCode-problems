class Solution {
    public boolean isAnagram(String s, String t) {
        int count[]=new int[256];
        for(int i=0;i<256;i++){
            count[i]=0;
        }
        for(int i=0;i<s.length();i++){
            count[s.charAt(i)]++;
        }
        for(int i=0;i<t.length();i++){
            count[t.charAt(i)]--;
        }
        for(int i=0;i<256;i++){
            if(count[i]>0)
                return false;
        }
        return true;
    }
    
}