class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string res="";
        set<string> v;
        unordered_map<char,string> mp;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                v.insert(res);
                res="";
            }
            else 
                 res+=s[i];
        }
        v.insert(res);
        for(int i=0;i<pattern.length();i++){
            if(mp.find(pattern[i])!=mp.end()){
                if(mp[pattern[i]]!=v[i])
                    return false;
            }
            else{
                mp[pattern[i]]=v[i];
            }
        }
        res="";
        for(int i=0;i<pattern.length();i++){
            res+=mp[pattern[i]];
            if(i<pattern.length()-1)
                res+=' ';
        }
        if(res==s)
            return true;
        else
            return false;

    }
};