#include<iostream>
using namespace std;
class Solution {
public:
    int strStr(string h, string n) {
        int len=n.length();
        for(int i=0;i<h.length();i++){
            if(h[i]==n[0]){
                if((i+len) < h.length()){
                  
                    if(h.substr(i,i+len-1)==n){
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    cout<<s.strStr("aaaaa","a");
    return 0;
}