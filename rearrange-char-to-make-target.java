class Solution {
    public int rearrangeCharacters(String s, String target) {
        Map<Character,Integer> map1=new HashMap<>();
        Map<Character,Integer> map2=new HashMap<>();
        int count=0;
        for(int i=0;i<target.length();i++){
            if(map1.containsKey(target.charAt(i))){
                map1.put(target.charAt(i),map1.get(target.charAt(i))+1);
            }
            else{
                map1.put(target.charAt(i),1);
            }
        }
        for(int i=0;i<s.length();i++){
            if(map2.containsKey(s.charAt(i))){
                map2.put(s.charAt(i),map2.get(s.charAt(i))+1);
            }
            else{
                map2.put(s.charAt(i),1);
            }
        }
        while(true){      
            int flag=0;
            for(Character c: map1.keySet()){
                if(map2.get(c) >= map1.get(c)){
                    map2.put(c,map2.get(c)-map1.get(c));
                }
                else{
                    flag=1;
                }
            }
            if(flag==1)
                break;
            count++;
        }
        
        return count;
        
    }
}