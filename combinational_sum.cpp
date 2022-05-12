class Solution {
public:
    void findNum(vector<vector<int>>& v,vector<int>& a,vector<int>& t,int i,int sum){
        if(sum==0)
        {
            v.push_back(t);
            return;
        }
        while(i<a.size() && sum-a[i]>=0){
            t.push_back(a[i]);
            findNum(v,a,t,i,sum-a[i]);
            i++;
            t.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        vector<vector<int>> v;
        vector<int> t;
        findNum(v,candidates,t,0,target);
        return v;
    }
};