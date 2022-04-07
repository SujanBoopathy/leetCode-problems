#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        stk.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(stk.empty() && (s[i]==')' || s[i]=='}' || s[i]==']')){
                return false;
            }
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stk.push(s[i]);
            }
            if(s[i]=='}' || s[i]==')' || s[i]==']'){
                if(stk.top()=='[' && s[i]==']'){
                    stk.pop();
                    continue;
                }
                if(stk.top()=='(' && s[i]==')'){
                    stk.pop();
                    continue;
                }
                
                if(stk.top()=='{' && s[i]=='}'){
                    stk.pop();
                    continue;
                }
                return false;
            }
        }
        if(stk.empty())
            return true;
        else 
            return false;
        
    }
};

int main(){
    Solution ss;
    string s;
    cin>>s;
    cout<<ss.isValid(s);
    return 0;
}