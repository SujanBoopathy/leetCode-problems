class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            int count=0;
            int j=i;
            while(j>0){
                count+=(j%2);
                j/=2;
            }
            v.push_back(count);
        }
        return v;
    }
};