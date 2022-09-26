class Solution {
    public int countWords(String[] words1, String[] words2) {
        Map<String,Integer> mapOne=new HashMap<>();
        Map<String,Integer> mapTwo=new HashMap<>();
        
        for(String s : words1){
            if(mapOne.containsKey(s)){
                mapOne.put(s,mapOne.get(s)+1);
            }
            else{
                mapOne.put(s,1);
            }
        }
        for(String s : words2){
            if(mapTwo.containsKey(s)){
                mapTwo.put(s,mapTwo.get(s)+1);
            }
            else{
                mapTwo.put(s,1);
            }
        }
        int count=0;
        if(words1.length<words2.length){
            for(String s: words1){
                if(mapOne.containsKey(s) && mapTwo.containsKey(s)){
                    if(mapOne.get(s)==1 && mapTwo.get(s)==1)
                    count++;
                }
            }
        }
        else{
            for(String s: words2){
                if(mapOne.containsKey(s) && mapTwo.containsKey(s)){
                    if(mapOne.get(s)==1 && mapTwo.get(s)==1)
                    count++;
                }
            }
        }
        return count;
   }
}