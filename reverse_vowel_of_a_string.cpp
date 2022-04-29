class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            return true;
        else
            return false;
    }
    string reverseVowels(string s) {
        vector<int> v1;
        vector<char> v2;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                v1.push_back(i);
                v2.push_back(s[i]);
            }
        }
        int j=v1.size()-1;
        for(int i=0;i<v1.size();i++){
            s[v1[i]]=v2[j--];
        }
        return s;
    }
};