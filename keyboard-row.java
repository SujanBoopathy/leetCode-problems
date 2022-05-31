class Solution {
    public String[] findWords(String[] words) {
        String firstRow="qwertyuiopQWERTYUIOP";
        String secondRow="asdfghkjlASDFGHJKL";
        String thirdRow="zxcvbnmZXCVBNM";


        Map<Character,Integer> rowId=new HashMap<>();
        List<String> list=new ArrayList<>();

        for(int i=0;i<firstRow.length();i++)
            rowId.put(firstRow.charAt(i),1);
        for(int i=0;i<secondRow.length();i++)
            rowId.put(secondRow.charAt(i),2);
        for(int i=0;i<thirdRow.length();i++)
            rowId.put(thirdRow.charAt(i),3);

            for(int ind=0;ind<words.length;ind++){
                String temp=words[ind];
                boolean flag=true;
                 list.add(temp);
                }
            }
}

}