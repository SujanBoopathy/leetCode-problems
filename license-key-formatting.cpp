class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans="";
        int n=s.length(),count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!='-'){
                if(count==k){
                    count=0;
                    ans+='-';
                }
                count++;
                if('a'<=s[i] && s[i]<='z'){
                    s[i]=toupper(s[i]);
                }
                ans+=s[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};