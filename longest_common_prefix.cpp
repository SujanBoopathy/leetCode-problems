class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        for(int i=0;i<strs[0].length();i++){
            for(const auto& str : strs){
                if(i>=strs[0].length() || str[i]!=strs[0][i]){
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
    }
};