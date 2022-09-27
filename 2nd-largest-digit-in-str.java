class Solution {
    public int secondHighest(String s) {
        int count[]=new int[10];
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>='0' && s.charAt(i)<='9'){
                count[s.charAt(i)-'0']++;
            }
        }
        int flag=1;
        for(int i=9;i>=0;i--){
            
            if(flag==1 && count[i]!=0)
                flag=0;
            else if(flag==0 && count[i]!=0){
                return i;
            }
            System.out.println(count[i]);
        }
        return -1;
    }
}