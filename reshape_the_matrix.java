class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int totalElements = mat.length * mat[0].length;
        if (totalElements != r * c || totalElements % r != 0) {
            return mat;
        }
        List<Integer> list=new ArrayList<>();
        for(int i=0;i<mat.length;i++){
            for(int j=0;j<mat[i].length;j++){
                list.add(mat[i][j]);
            }
        }
        int res[][]=new int[r][c];
        
        int temp=0;
        for(int i=0;i<r && list.size()>0;i++){
            for(int j=0;j<c && list.size()>0;j++){
                res[i][j]=list.get(temp++);
            }
        }
        return res;
    }
}