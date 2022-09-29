class Solution {
    public boolean areOccurrencesEqual(String s) {
        int count[]=new int[26];
        for(int i=0;i<s.length();i++){
            count[s.charAt(i)-'a']++;
        }
        int temp=0,flag=0;
        for(int i=0;i<26;i++){
            if(count[i]>0 && flag==0){
                temp=count[i];
                flag=1;
            }
            if(flag==1 && count[i]>0 &&count[i]!=temp){
                return false;
            }
        }
        return true;
    }
}