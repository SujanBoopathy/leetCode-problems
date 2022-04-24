class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> result;
        result.push_back(1);
        result.push_back(0);
        int line=0;
        for(int i=0;i<s.length();i++){
            line+=widths[s[i]-'a'];
            if(line>100){
                result[0]++;
                line=widths[s[i]-'a'];
            }
            
        }
        result[1]=line;
        return result;
    }
};