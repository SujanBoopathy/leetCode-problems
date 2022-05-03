class Solution {
public:
    int findMin(vector<int> v,int i){
        int m=INT_MAX;
        for(int i=0;i<v.size();i++){
            int t=v[i]-i;
            m=min(t,m);
        }
        return m;
    }
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        vector<int> ans;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                v.push_back(i);
            }
        }
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                ans.push_back(0);
            }
            else{
                ans.push_back(findMin(v,i));
            }
        }
        return ans;
    }
};