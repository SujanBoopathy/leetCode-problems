class Solution {
    public boolean checkDistances(String s, int[] distance) {
        int visited[]=new int[26];
        for(int i=0;i<s.length();i++){
            if(visited[s.charAt(i)-'a']!=1){
                if((i+distance[s.charAt(i)-'a']+1) < s.length() && s.charAt(i)==s.charAt(i+distance[s.charAt(i)-'a']+1)){
                    visited[s.charAt(i)-'a']=1;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
}