class Solution {
public:
    int maxArea(vector<int>& height) {
        int first=0,last=height.size()-1;
        int ma=0;
        while(first<last){
            ma=max(ma,(last-first)*min(height[first],height[last]));
            if(height[first]>height[last])
                last--;
            else
                first++;
        }
        return ma;
    }
};