class Solution {
public:
    string check(string s){
        if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='u' || s[0]=='o' || s[0]=='A' || s[0]=='E' || s[0]=='I' || s[0]=='O' || s[0]=='U'){
            s+="ma";
        }
        else{
            char c=s[0];
            for(int i=1;i<s.length();i++){
                s[i-1]=s[i];
            }
            s[s.length()-1]=c;
            s+="ma";
        }
        return s;
    }
    string toGoatLatin(string s) {
        string temp="";
        vector<string> v;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                v.push_back(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        v.push_back(temp);
        for(int i=0;i<v.size();i++){
            v[i]=check(v[i]);
        }
        string t="a";
        for(int i=0;i<v.size();i++){
            v[i]+=t;
            t+="a";
        }
        string res="";
        for(int i=0;i<v.size();i++){
            if(i!=v.size()-1)
               res=res+v[i]+' ';
            else
                res=res+v[i];
        }
        
        return res;
    }
    
};