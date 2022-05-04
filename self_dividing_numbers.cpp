class Solution {
public:
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left;i<=right;i++){
            if(check(i))
                v.push_back(i);
        }
        return v;
    }
};