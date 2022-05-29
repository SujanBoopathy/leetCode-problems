class Solution {
    public boolean isToeplitzMatrix(int[][] matrix) {
        int m=matrix.length;
        int n=matrix[0].length;
        for(int index=0;index<n;index++){
            int i=0;
            int j=index;
            int value=matrix[i][j];
            while(i<m && j<n){
                if(matrix[i][j]!=value)
                    return false;
                i++;
                j++;
            }
        }
        
        
        return true;
    }
}