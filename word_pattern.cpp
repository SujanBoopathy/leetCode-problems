class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string temp="",res="";
        vector<string> v;
        set<char> st;
        for(int i=0;i<pattern.length();i++){
            st.insert(s[i]);
        }
        for(int i=0;i<s.length();i++){
            temp+=s[i];
            if(s[i]==32){
                v.push_back(temp);
                temp=" ";
            } 
        }
        set<string> st2(v.begin(),v.end());
        unordered_map<char,string> mp;
        if(st.size()!=st2.size)
            return false;
        else{
            set<int>::iterator itr1,itr2;
            for(itr1=st.begin(),itr2=st2.begin();itr1!=st.end() && itr2!=st2.end();itr1++,itr2++){
                mp[itr1]=itr2;
            }
        }
        for(int i=0;i<pattern.length();i++){
            
        }
        
    }
};