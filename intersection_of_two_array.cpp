class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        /*
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        vector<int> v;
        for(auto i:s1){
            for(auto j:s2){
                if(i==j)
                    v.push_back(i);
            }
        }
        return v;
        */
        if(nums1.size()>nums2.size()){
            intersection(nums2,nums1);
        }
        unordered_map<int,int> mp;
        for(auto i : nums1){
            mp[i]=1;
        }
        vector<int> v;
        for(auto i:nums2){
            if(mp[i]==1){
                v.push_back(i);
                mp[i]--;
            }
        }
        return v;
        
    }
};