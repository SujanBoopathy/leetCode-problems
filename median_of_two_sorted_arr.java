class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int a[]=new int[nums1.length+nums2.length];
        int i=0,j=0,k=0;
        while(i<nums1.length && j<nums2.length){
            if(nums1[i]<nums2[j]){
                a[k]=nums1[i];
                k++;
                i++;
            }
            else{
                a[k]=nums2[j];
                k++;
                j++;
            }
        }
        if(i<nums1.length){
            while(i<nums1.length){
                a[k]=nums1[i];
                k++; i++;
            }
        }
        else{
            while(j<nums2.length){
                a[k]=nums2[j];
                k++; j++;
            }
        }
        if((nums1.length+nums2.length)%2==0){
            int t=(nums1.length+nums2.length)/2;
            return (a[t]+a[t-1])/2.0;
        }
        else{
            return a[(nums1.length+nums2.length)/2];
        }
        
    }
}