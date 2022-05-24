class Solution {
    public String removeOuterParentheses(String s) {
        String res="";
        int check=0;
        List<String> arr=new ArrayList<>();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='('){
                check++;
            }
            else if(s.charAt(i)==')'){
                check--;
            } 
            if(check!=0){
                res+=s.charAt(i);
            }
            if(check==0 && res.length()!=0){
                arr.add(res.substring(1));
                res="";
            }
                       
        }
        String result="";
        for(String aa:arr){
            result+=aa;
        }
        
        return result;
    }
}