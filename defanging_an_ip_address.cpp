class Solution {
public:
    string defangIPaddr(string address) {
        string s="",r="";
        for(int i=0;i<address.length();i++){
            if(address[i]!='.')
                 r+=address[i];
            else{
                s+=r;
                r="";
                s+="[.]";
            }
            
        }
        return s+r;
    }
};