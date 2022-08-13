class Solution {
    public String digitSum(String s, int k) {
        while(s.length()>k){
            List<String> l=new ArrayList<>();
            int p=0;
            String temp="",newStr="";
            for(int i=0;i<s.length();i++){
                if(p==k){
                    p=0;
                    l.add(temp);
                    temp="";
                }
                else{
                    p++;
                    temp+=s.charAt(i);
                }
            }
            l.add(temp);
            for(String str:l){
                int sum=0;
                for(int i=0;i<str.length();i++){
                    sum+=str.charAt(i)-'0';
                }
                newStr+=Integer.toString(sum);            
            }
            s=newStr;
        }
        return s;
    }
}