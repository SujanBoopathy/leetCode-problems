class Solution {
    public int rearrangeCharacters(String s, String target) {
        Map<Character,Integer> map1=new HashMap<>();
        Map<Character,Integer> map2=new HashMap<>();
        for(int i=0;i<target.length();i++){
            if(map1.contains(target.charAt(i))){
                map1.put(target.charAt(i),map1.get(target.charAt(i))+1);
            }
            else{
                map1.put(target.charAt(i),1);
            }
        }
        for(int i=0;i<s.length();i++){
            if(map2.contains(s.charAt(i))){
                map1.put(s.charAt(i),map1.get(s.charAt(i))+1);
            }
            else{
                map2.put(s.charAt(i),1);
            }
        }
        return s;
    }
}