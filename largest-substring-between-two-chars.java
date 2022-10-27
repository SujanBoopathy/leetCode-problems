class Solution {
    public int maxLengthBetweenEqualCharacters(String s) {
        int[] lookup=new int[26];
        for(int i=0;i<26;i++){
            lookup[i]=-1;
        }
        int result=-1;
        for(int i=0;i<s.length();i++){
            if(lookup[s.charAt(i)-'a']>=0){
                result=Math.max(result,i-lookup[s.charAt(i)-'a']-1);
            }
            else{
                lookup[s.charAt(i)-'a']=i;
            }
        }
        return result;
    }
}
