class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;
        int ans=0;
        for(auto x:deck){
            mp[x]++;
        }
        for(auto a:mp){
            ans=__gcd(ans,a.second);
        }
        return ans>1;
    }
};
