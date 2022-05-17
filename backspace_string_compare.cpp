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
        string res1="",res2="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
                res1+=s[i];
            }
        }
                for(int i=0;i<t.length();i++){
            if(t[i]!='#'){
                res2+=t[i];
            }
        }
        if(res1==res2)
            return true;
        else
            return false;
    }
};