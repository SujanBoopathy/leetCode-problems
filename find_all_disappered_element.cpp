class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> v;
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()){
                v.push_back(i);
            }
        }
        return v;
    }
};