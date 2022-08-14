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
        int i;
        for(i=1;i<words.length;i++){
            int j=i-1;
            while(words[j].equals("")){
                j--;
            }
            if(!lst.contains(words[j])){
                 lst.add(words[j]);
            }
            if(check(words[i],words[j])){
                words[i]="";
            }
            
        }
        if(!lst.contains(words[i-1]) && !words[i-1].equals("")){
            lst.add(words[i-1]);
        }
        return lst;
    }
}