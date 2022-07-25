class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int checker=0;
        if(grid[0][0]!=0){
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid.size();j++){
                    if(i==j && grid[i][j]==checker){
                        return false;
                    }
                    if((i+j)==grid.size()-1 && grid[i][j]==checker){
                        return false;
                    }
                }
            }
        }
        else{
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid.size();j++){
                    if(i==j && grid[i][j]!=checker){
                        return false;
                    }
                    if((i+j)==grid.size()-1 && grid[i][j]!=checker){
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
};