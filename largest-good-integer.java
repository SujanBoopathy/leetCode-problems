class Solution {
    public String largestGoodInteger(String num) {
        String result="";
        int n=0,flag=0;
        for(int i=1;i<num.length()-1;i++){
            if(num.charAt(i-1)==num.charAt(i) && num.charAt(i)==num.charAt(i+1) ){
                if(n<(num.charAt(i)-'0')){
                    result=num.substring(i-1,i+2);
                    n=num.charAt(i)-'0';
                }
                flag=1;
            }
        }
        if(flag==0)
            return "";
        if(flag==1 && n==0)
            return "000";
        return result;
    }
}