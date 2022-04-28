class Solution {
public:
    void flipImage(vector<int>& v){
        reverse(v.begin(),v.end());
    }
    void invertImage(vector<int>& v){
        for(int i=0;i<v.size();i++){
            if(v[i]==1)
                v[i]=0;
            else
                v[i]=1;
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            flipImage(image[i]);
            invertImage(image[i]);
        }
        return image;
    }
};