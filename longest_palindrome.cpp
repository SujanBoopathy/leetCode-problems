class Solution {
public:
    int longestPalindrome(string s){
        int a[52]={0};
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                a[s[i]-'a']++;
            }
            else{
                a[s[i]-'a'+26]++;
            }
        }
        int count=0;
        for(int i=0;i<52;i++){
            count+=a[i]/2;
        }
        count*=2;
        if(count+1<s.length())
            return count+1;
        return s.length();
    }
};