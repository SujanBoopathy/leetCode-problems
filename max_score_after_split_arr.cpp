#include<iostream>
using namespace std;

class Solution {
public:
    int countZerosOnes(string s,string t){
        int c1=0,c2=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') c1++;
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='1') c2++;
        }
        cout<<s<<" "<<t<<endl;
        return c1+c2;
    }
    int maxScore(string s) {
        int len=s.length();
        int m=0;
        for(int i=1;i<len;i++){
            m=max(m,countZerosOnes(s.substr(0,i),s.substr(i,len)));
        }
        return m;
    }
};
int main(){
    Solution s;
    s.maxScore("011101");
    return 0;
}