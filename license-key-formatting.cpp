class Solution {
public:
    string licenseKeyFormatting(string s, int t) {
        int i=0;
        string str="",res="";
        for(;i<s.length();i++){
            res+=s[i];
            if(s[i]=='-')
                break;
        }
        for(int j=i;j<s.length();j++){
            if(s[j]!='-')
                str+=toupper(s[j]);
        }
        for(int k=0;k<str.length();k++){
            if(k%t==0 && k>0)
                res+='-';
            res+=str[k];
        }
        return res;
    }
};