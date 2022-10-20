class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        int countOfAllowed[]=new int[26];
        int result=0;
        for(int i=0;i<allowed.length();i++){
            countOfAllowed[allowed.charAt(i)-'a']=1;
        }
        for(String s:words){
            int count[]=new int[26];
            for(int i=0;i<s.length();i++){
                count[s.charAt(i)-'a']=1;
            }
            int flag=0;
            for(int i=0;i<26;i++){
                if(count[i]==1 && count[i]!=countOfAllowed[i]){
                    flag=1;
                }
            }
            if(flag==0)
                result++;
        }
        return result;
    }
}
