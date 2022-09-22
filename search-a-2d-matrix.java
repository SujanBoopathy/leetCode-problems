class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        for(int i=0;i<matrix.length-1;i++){
            if(matrix[i][0]==target)
                return true;
            if(matrix[i][0]<target && matrix[i+1][0]>target){
                for(int j=1;j<matrix[i].length;j++){
                    if(matrix[i][j]==target)
                        return true;
                }
            }            
        }
        for(int i=matrix.length-1,j=0;j<matrix[i].length;j++){
            if(target==matrix[i][j])
                return true;
        }
        return false;
    }
}