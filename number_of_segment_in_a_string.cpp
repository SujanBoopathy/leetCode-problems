class Solution {
public:
    bool checkStr(string t){
        for(int i=0;i<t.length();i++){
            if(t[i]!=32)
                return true;
        }
        return false;
    }
    int countSegments(string s) {
        string temp="";
        vector<string> v;
        for(int i=0;i<s.length();i++){
            if(s[i]==32 && checkStr(temp)){
                v.push_back(temp);
            }
            else{
                temp+=s[i];
            }
        }
        if(checkStr(temp))
            v.push_back(temp);
        return v.size();
    }
};