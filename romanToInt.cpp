class Solution {
public:
    int romanValue(char i){
        if(i=='I')
            return 1;
        else if(i=='V')
            return 5;
        else if(i=='X')
            return 10;
        else if(i=='L')
            return 50;
        else if(i=='C')
            return 100;
        else if(i=='D')
            return 500;
        else if(i=='M')
            return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int sum=0,temp;
        for(int i=0;i<s.length();i++){
            if(romanValue(s[i])>=romanValue(s[i+1])){
                temp=romanValue(s[i]);
                sum+=temp;   
            }
            else{
                temp=romanValue(s[i+1])-romanValue(s[i]);
                sum+=temp;
                i++;
            }
        }
        return sum;
    }
};