class Solution {
public:
    bool rotateString(string s, string goal) {
        string str=s;
        for (int i=0;i<str.length();i++){
            char c=str[0];
            for(int j=1;j<str.length();j++){
                str[j-1]=str[j];
            }
            str[str.length()-1]=c;
            if(str==goal)
                return true;
        }
        return false;
    }
};