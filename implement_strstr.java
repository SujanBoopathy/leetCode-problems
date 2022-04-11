class Solution {
    public int strStr(String haystack, String needle) {
        if(haystack==null || needle==null)
            return -1;
        if(haystack.equals(needle))
            return 0;
        int nlen=needle.length();
        for(int i=0;i<haystack.length()-nlen+1;i++){
            if(haystack.substring(i,i+nlen).equals(needle)){
                return i;
            }
        }
        return -1;
    }
}