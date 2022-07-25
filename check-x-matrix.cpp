class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int checker=1;
        if(grid[0][0]!=0){
            checker=0;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(checker==0){
                    if(i==j && grid[i][j]==checker){
                        return false;
                    }
                    if((i+j)==grid.size()-1 && grid[i][j]==checker){
                        return false;
                    }
                }
                else{
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