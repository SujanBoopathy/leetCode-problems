class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            s[i]=to_lower(s[i]);
        }
        return s;
    }
};