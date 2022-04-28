class Solution {
public:
    string reverseWords(string s) {
        string res="";
        vector<string> v;
        for(int i=0;i<s.length();i++){
            if(s[i]==32)
            {
                v.push_back(res);
                res="";
            }
            else
                res+=s[i];
        } 
        v.push_back(res);
        for(int i=0;i<v.size();i++){
            res=v[i];
            reverse(res.begin(),res.end());
            v[i]=res;
        }
        res="";
        for(int i=0;i<v.size();i++){
            res+=v[i];
            if(i!=v.size()-1)
                res+=" ";
        }
        return res;
    }
};