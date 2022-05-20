// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1)
            return 1;
        int left,right,num;
        if(n%2==0){
            right=n/2;
            left=right-1;
        }
        else{
            left=n/2;
            right=left+1;
        }
        while(){
            if(isBadVersion(right)){
                
            }
        }
    }
};