class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string s[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> st;
        for(auto& v:words){
            string res="";
            for(char a:v){
                res+=s[a-97];
            }
            st.insert(res);
        }
        return st.size();
    }
};