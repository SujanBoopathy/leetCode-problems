class Solution {
public:
    char findTheDifference(string s, string t) {
        int c[256]={0};
        for(int i=0;i<t.length();i++){
            c[t[i]]++;
        }
        for(int i=0;i<s.length();i++){
            c[s[i]]--;
        }
        for(int i=0;i<256;i++){
            if(c[i]==1)
                return (char)i;
        }
        return '-1';
    }
};