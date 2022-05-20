// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1) return 1;
        int mid=n/2;
        if(!isBadVersion(mid)){
            if(!isBadVersion(mid-1) && mid-1>0){
                if(isBadVersion(mid+1) && mid+1<=n){
                    return mid;
                }
            }
            
            for(int i=mid+1;i<=n;i++){
                if(isBadVersion(i)){
                    return i;
                }
            }
        }
        else{
            
            for(int i=mid-1;i>0;i--){
                if(!isBadVersion(i)){
                    return i+1;
                }
            }
        }
        return -1;
        
    }
};