class Solution {
public:
    int findComplement(int num) {
        string s="";
        while(num>=2){
            if(num%2==1)
                s+="0";
            else
                s+="1";
            num/=2;
        }
        s+=num;
        int sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                sum+=pow(2,i);
            }                
        }
        return sum;
    }
};