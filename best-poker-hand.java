class Solution {
    public boolean checkSameSuits(char s[]){
        char ch=s[0];
        for(int i=1;i<s.length;i++){
            if(ch!=s[i])
                return false;
        }
        return true;
    }
    public int checkKinds(int r[]){
        int[] count=new int[14];
        for(int i=0;i<r.length;i++){
            count[r[i]]++;
        }
        int three=0,pair=0;
        for(int i=1;i<14;i++){
            if(count[i]==2){
                pair=1;
            }
            else if(count[i]>=3){
                three=1;
            }
        }
        if(three==1)
            return 1;
        else if(pair==1)
            return 2;
        else 
            return 0;
    }
    public String bestHand(int[] ranks, char[] suits) {
        int res=checkKinds(ranks);
        if(checkSameSuits(suits)){
            return "Flush";
        }
        else if(res==1){
            return "Three of a Kind";
        }
        else if(res==2){
            return "Pair";
        }
        else{
            return "High Card";
        }
    }
}