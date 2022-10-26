class Solution {
    public int countGoodRectangles(int[][] rectangles) {
        int maxLen=Integer.MIN_VALUE;
        int result=0;
        for(int i=0;i<rectangles.length;i++){
            if(rectangles[i][0]>rectangles[i][1]){
                if(rectangles[i][1]>maxLen){
                    maxLen=rectangles[i][1];
                }
            }
            else{
                if(rectangles[i][0]>maxLen){
                    maxLen=rectangles[i][0];
                }
            }
        }
        for(int i=0;i<rectangles.length;i++){
            if(rectangles[i][0]>rectangles[i][1]){
                if(rectangles[i][1]==maxLen){
                    result++;
                }
            }
            else{
                if(rectangles[i][0]==maxLen){
                    result++;
                }
            }
        }
        return result;
    }
}
