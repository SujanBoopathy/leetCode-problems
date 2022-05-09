class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int size=0;
        vector<int> v;
        for(int i=0;i<mat.size();i++){
            vector<int> temp=mat[i];
            size+=temp.size();
            for(int j=0;j<temp.size();j++){
                v.push_back(temp[j]);
            }
        }
        if(r*c != size)
            return mat;
        int index=0;
        vector<vector<int>> ans;
        for(int i=0;i<r;i++){
            vector<int> t;
            for(int j=0;j<c;j++){
                t.push_back(v[index]);
                index++;
            }
            ans.push_back(t);            
        }
        return ans;
    }
};