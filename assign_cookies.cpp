class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        unordered_map<int,int> mp;
        int count=0;
        for(auto a :g){
            mp[a]++;
        }
        for(auto a:s){
            if(mp[a]!=0){
                mp[a]--;
                count++;
            }
        }
        return count;
    }
};