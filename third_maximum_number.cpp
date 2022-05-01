class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        vector<int> v;
        for(auto a:s)
            v.push_back(a);
        if(v.size()<3)
            return v[v.size()-1];
        else
            return v[v.size()-3];
    }
};