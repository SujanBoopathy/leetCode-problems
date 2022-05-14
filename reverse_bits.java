public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        String s=Integer.toBinaryString(n);
        String t="";
        for(int i=0;i<32-s.length();i++){
            t+='0';
        }
        s=t+s;
        t="";
        for(int i=31;i>=0;i--){
            t+=s.charAt(i);
        }
        return Integer.parseInt(t,2);
        
    }
}