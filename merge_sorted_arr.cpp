class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0,f=0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]<0){
                f=1;
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(nums2[i]<0)
                f=1;
        }
        if(f==1){
            for(int i=0;i<nums1.size();i++){
                if(true){
                    nums1[j]=nums1[i];
                    j++;
                }
            }

            for(int i=0;i<nums2.size();i++){
                if(true){
                    nums1[j]=nums2[i];
                    j++;
                }
            }
            sort(nums1.begin(),nums1.end());
        }
        else{
            for(int i=0;i<nums1.size();i++){
                if(nums1[i]!=0){
                    nums1[j]=nums1[i];
                    j++;
                }
            }

            for(int i=0;i<nums2.size();i++){
                if(nums2[i]!=0){
                    nums1[j]=nums2[i];
                    j++;
                }
            }
            sort(nums1.begin(),nums1.end());
        }

        
        
    }
};