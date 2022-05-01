class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string s[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> st;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            string res="";
            for(char &a:s){
                int t=a-'a';
                res+=s[t];
            }
            st.insert(res);
        }
        return 9;
        
    }
};