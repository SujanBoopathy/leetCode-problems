class Solution {
public:
    int firstUniqChar(string s) {
        char res;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(char a:s){
            if(mp[a]==1){
                res=a;
                break;
            }                
        }
        for(int i=0;i<s.length();i++){
            if(s[i]==res)
                return i;
        }
        return -1;
    }
};