class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i=0;i<numRows;i++){
            vector<int> vect;
            for(int j=i;j>=0;j--){
                if(j==0 || j==i){
                    vect.push_back(1);
                }
                else{
                    vect.push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
            v.push_back(vect);
        }
        return v;
    }
};