class Solution {
public:
    string toGoatLatin(string s) {
        string temp="";
        vector<string> v;
        for(int i=0;i<s.length();i++){
            if(s[i]==" "){
                v.push_back(temp);
                temp=" ";
            }
            else{
                temp+=s[i];
            }
        }
        string res="";
        for(int i=0;i<v.size();i++){
            res=res+v[i]+" ";
        }
        return res;
    }
    
};