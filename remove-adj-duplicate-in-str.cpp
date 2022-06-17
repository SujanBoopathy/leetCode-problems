class Solution {
public:
    string removeDuplicates(string s) {
        int start=0,end=s.length();
        while(start<=end){
            if(s[start]==s[start+1]){
                s=s.substr(0,start)+s.substr(start+2,end-1);
                end--;
                start=0;
                continue;
            }
            start++;
        }
        return s;
    }
};