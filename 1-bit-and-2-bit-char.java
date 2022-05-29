class Solution {
    public boolean isOneBitCharacter(int[] bits) {
        int flag=0;
        for(int i=0;i<bits.length;i++){
            if(bits[i]==0){
                flag=1;
            }
            else{
                flag=0;
                i++;
            }
        }
        if(flag==1) return true;
        else return false;
    }
}