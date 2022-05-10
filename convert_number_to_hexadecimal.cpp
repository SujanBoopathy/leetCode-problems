class Solution {
public:
    string toHex(int num) {
        string str="";
        map<int,char> mp;
        char c='a',digit='0';
        for(int i=0;i<=15;i++){
            if(i<10){
                mp[i]=digit++;
            }
            else{
                mp[i]=c++;
            }
        }
        if(!num)
            return "0";
        if(num>0){
            while(num){
                str=mp[num%16]+str;
                num/=16;
            }
        }
        else{
            u_int n=num;
            while(n){
                str=mp[n%16]+str;
                n/=16;
            }
        }
        return str;
    }
};