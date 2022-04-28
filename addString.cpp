class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        string res="";
        int carry=0;
        for(int i=0;i<num1.length() || i<num2.length();i++){
            int c1=0,c2=0;
            if(i<num1.length())
                c1=num1[i]-'0';
            if(i<num2.length())
                c2=num2[i]-'0';
            int sum=c1+c2+carry;
            int digit=sum%10;
            carry=sum/10;
            res+=to_string(digit);
        }
        if(carry!=0)
            res+=to_string(carry);
        reverse(res.begin(),res.end());
        return res;
    }
};