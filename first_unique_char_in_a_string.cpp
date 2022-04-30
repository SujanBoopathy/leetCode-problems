class Solution {
public:
    int firstUniqChar(string s) {
        char res;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto a:mp){
            if(a.second==1){
                res=a.first;
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