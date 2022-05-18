class Solution {
    public boolean judgeCircle(String moves) {
        int left=0,right=0,up=0,down=0;
        for(int i=0;i<moves.length();i++){
            if(moves.charAt(i)=='U')
                up++;
            else if(moves.charAt(i)=='D')
                down++;
            else if(moves.charAt(i)=='L')
                left++;
            else if(moves.charAt(i)=='R')
                right++;
        }
        int ch1=Math.abs(up-down);
        int ch2=Math.abs(left-right);
        if(ch1 !=0 || ch2!=0)
            return false;
        else
            return true;
    }
}