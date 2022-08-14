class Solution {
    public boolean check(String s,String s2){
        int count[]=new int[26];
        for(int i=0;i<s.length();i++){
            count[s.charAt(i)-'a']++;
        }
        for(int i=0;i<s2.length();i++){
            count[s2.charAt(i)-'a']--;
        }
        for(int i=0;i<26;i++){
            if(count[i]!=0)
                return false;
        }
        return true;
    }
    public List<String> removeAnagrams(String[] words) {
        List<String> lst=new ArrayList<>();
        String temp="";
        for(String s:words){
            if(check(temp,s)){
                continue;
            }
            else{
                lst.add(s);
            }
            temp=s;
        }
        return lst;
    }
}