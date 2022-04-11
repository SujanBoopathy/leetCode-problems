#include<iostream>
using namespace std;
class Solution {
public:
    int strStr(string h, string n) {
        int len=n.length();
        for(int i=0;i<h.length();i++){
            if(h[i]==n[0]){
                cout<<h[i];
                if((i+len-1) < h.length()){
                    cout<<i+len-1;
                    cout<<"\n"<<h.substr(i,i+len-1)<<endl;
                    if(h.substr(i,i+len-2)==n){
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
    cout<<s.strStr("hello","ll");
    return 0;
}