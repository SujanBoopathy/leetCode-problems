class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s="";
        for(int i=0;i<32;i++){
            int temp=n%2;
            n/=2;
            s+=(char)temp;
        }
        uint32_t res;
        for(int i=0;i<32;i++){
            res=res*10+int(s[i]);
        }
        return res;
    }
};