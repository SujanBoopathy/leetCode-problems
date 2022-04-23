class Solution {
public:
    bool checkPalindrome(string s){
        int len=s.length();
        for(int i=0;i<s.length();i++){
            if(s[i]!=s[len-i-1])
                return false;
        }
        return true;
    }
    bool isPalindrome(string s) {
        if(s==" ")
            return true;
        string str="";
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
            if(s[i]>='a' && s[i]<='z'){
                str+=s[i];
            }
        }
        return checkPalindrome(str);
    }
};