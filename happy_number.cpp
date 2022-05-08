class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while(s.count(n)==0){
            int temp=0;
            int t=n;
            while(t>0){
                temp+=(t%10)*(t%10);
                t/=10;
            }
            n=temp;            
        }
        if(n==1)
            return true;
        else
            return false;
    }
};