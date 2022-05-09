class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1)
            return false;
        long long int sum=1;
        for(long long int i=2;i<=(int)sqrt(num);i++){
            if(num%i==0){
                sum+=i;
                if(i*i != num)
                    sum+=(num/i);
            }
        }
        if(num==sum)
            return true;
        else
            return false;
    }
};