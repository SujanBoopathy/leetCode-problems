class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        List<Integer> list=new ArrayList<>();
        for(int i=0;i<mat.length;i++){
            for(int j=0;j<mat[i].length;j++){
                list.add(mat[i][j]);
            }
        }
        int res[][]=new int[r][c];
        ListIterator<Integer> itr=list.listIterator<>();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                res[i][j]=itr.next();
            }
        }
        return res;
    }
}