class Solution {
    public int[] decrypt(int[] code, int k) {
        int result[]=new int[code.length];
        int z=0;
        if(k>0){
            for(int i=0;i<code.length;i++){
                int sum=0;
                int count=0;
                for(int j=i+1;count<k;j++){
                    if(j==code.length){
                        j=0;
                    }
                    sum+=code[j];
                    count++;
                }
                result[z++]=sum;
            }            
        }
        else if(k<0){
            for(int i=0;i<code.length;i++){
                int sum=0;
                int count=0;
                for(int j=i-1;count<(-1*k);j--){
                    if(j==-1){
                        j=code.length-1;
                    }
                    sum+=code[j];
                    count++;
                }
                result[z++]=sum;
            }
        }
        return result;
    }
}
