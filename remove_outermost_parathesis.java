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
            
                       
        }
        String result="";
        for(String aa:arr){
            result+=aa;
        }
        
        return result;
    }
}