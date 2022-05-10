class Solution {
public:
    string toHex(int num) {
        string str="";
        while(num>=16){
            if(num%16==10)
                str+='a';
            else if(num%16==11)
                str+='b';
            else if(num%16==12)
                str+='c';
            else if(num%16==13)
                str+='d';
            else if(num%16==14)
                str+='e';
            else if(num%16==15)
                str+='f';
            else
                str+=to_string(num%16);
            num/=16;
        }
        str+=to_string(num);
        reverse(str.begin(),str.end());
        return str;
    }
};