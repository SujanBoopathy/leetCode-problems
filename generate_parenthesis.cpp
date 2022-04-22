class Solution {
public:
    void generate(vector<string>& v,int open,int close,string s,int n){
        if(open==n && close==n)
        {
            v.push_back(s);
            return ;
        }
        if(open<n){
            generate(v,open+1,close,s+'(',n);
        }
        if(close<open){
            generate(v,open,close+1,s+')',n);
        }
    }
    vector<string> generateParenthesis(int n) {
        int start=0,end=0;
        vector<string> v;
        string s="";
        generate(v,start,end,s,n);
        return v;
    }
};