class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        vector<int> res;
        for(int i=0;i<s.length();i++){
            if(s[i]==c)
                v.push_back(i);
        }
        for(int i=0;i<s.length();i++){
            if(s[i]==c)
                res.push_back(0);
            else{
                int m=INT_MAX;
                for(int j=0;j<v.size();j++){
                    m=min(m,abs(v[j]-i));
                }
                res.push_back(m);
            }
        }
        return res;
    }
};