class Solution {
public:
    int countSegments(string s) {
        
        string temp="";
        vector<string> v;
        for(int i=0;i<s.length();i++){
            if(s[i]==32){
                v.push_back(temp);
            }
            else{
                temp+=s[i];
            }
        }
        v.push_back(temp);
        return v.size();
    }
};