class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        for(int i=0;i<height.size()-1;i++){
            for(int j=i+1;j<height.size();j++){
                int h=min(height[i],height[j]);
                int w=j-i;
                int a=w*h;
                area=max(area,a);
            }
        }
        return area;
    }
};