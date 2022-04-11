class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength=0;
        int i=0,j;
        int n=s.length();
        while(i<n){
            int visited[256]={0};
            j=i;
            while(j<n && visited[s[j]]==0){
                visited[s[j]]=1;
                maxLength=max(maxLength,j-i+1);
                j++;
            }
            i++;
        }
        return maxLength;
    }
};