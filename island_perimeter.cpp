class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    int temp=4;
                    if(i-1>=0 ){
                        if(grid[i-1][j]==1){
                            temp--;
                        }
                    }
                    if(i+1<row){
                        if(grid[i+1][j]==1)
                            temp--;
                    }
                    if(j-1>=0){
                        if(grid[i][j-1]==1)
                            temp--;

                    }
                    if(j+1<col){
                       if(grid[i][j+1]==1)
                            temp--;
                    }
                    perimeter+=temp;
                }
            }
        }
        return perimeter;
    }
};