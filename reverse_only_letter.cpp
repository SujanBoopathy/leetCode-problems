class Solution {
public:
   
    string reverseOnlyLetters(string s) {
        int start=0,end=s.length()-1;
        while(start<end){
            if(check(s[start]) && check(s[end])){
                swap(s[start],s[end]);
                start++;
                end--;
            }
            if(!check(s[start]))
                start++;
            if(!check(s[end]))
                end--;
        }
        return s;
    }
};