class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
        string rev=str;
        reverse(rev.begin(),rev.end());
        if(str==rev)
            return true;
        else 
            return false;
    }
};