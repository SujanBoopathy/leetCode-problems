class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int noOfCookies=s.size(),noOfKids=g.size(),ans=0,cookies=0;
        for(int i=0;i<noOfKids && cookies<noOfCookies;){
            if(s[cookies]>=g[i]){
                i++;
                ans++;
            }
            cookies++;
        }
        return ans;
    }
};