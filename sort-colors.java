class Solution {
    public void merge(int[] nums,int left,int mid,int right){
        int i,j,k;
        int[] temp=new int[right-left+1];
        i=left;
        j=mid+1;
        k=0;
        
        while(i<=mid && j<=right){
            if(nums[i]>nums[j]){
                temp[k]=nums[j];
                j++;
                k++;
            }
            else{
                temp[k]=nums[i];
                i++;
                k++;
            }
        }
        while(i<=mid){
            temp[k]=nums[i];
            k++;
            i++;
        }
        while(j<=right){
            temp[k]=nums[j];
            j++;
            k++;
        }
        k=0;
        for(i=left;i<=right;i++){
            nums[i]=temp[k++];
        }
    }
    public void mergeSort(int[] nums,int low,int high){
        int mid;
        if(low<high){
            mid=(low+high)/2;
            mergeSort(nums,low,mid);
            mergeSort(nums,mid+1,high);
            merge(nums,low,mid,high);
            
        }
    }
    public void sortColors(int[] nums) {
        // Arrays.sort(nums);
        mergeSort(nums,0,nums.length-1);
        
    }
}