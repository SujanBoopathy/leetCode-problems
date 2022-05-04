class Solution {
public:
    bool check(int x){
        int temp,r=x;
        while(x>0){
            temp=x%10;
            if(temp==0) return false;
            if(r%temp!=0) return false;
            x/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left;i<=right;i++){
            if(check(i))
                v.push_back(i);
        }
        return v;
    }
};