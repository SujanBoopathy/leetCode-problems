class Solution {
public:
    int findComplement(int num) {
        string str="";
        while(num>=2){
            if(num%2==1)
                str+="0";
            else
                str+="1";
            num/=2;
        }
        str+=num;
        int sum=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='1'){
                sum+=pow(2,i);
            }                
        }
        return sum;
    }
};
