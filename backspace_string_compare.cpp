class Solution {
public:
    bool backspaceCompare(string s, string t) {
        for(int i=1;i<s.length();i++){
            if(s[i]=='#'){
                int j=i-1;
                while(s[j]=='#'){
                    j--;
                }
                s[j]='#';
            }
        }
        for(int i=1;i<t.length();i++){
            if(t[i]=='#'){
                int j=i-1;
                while(t[j]=='#'){
                    j--;
                }
                t[j]='#';
            }
        }
    }
};