class Solution {
public:
    string intToRoman(int n) {
        string res="";
        string values[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int nums[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        int i=0;
        while(n>0){
            while(nums[i]<=n){
                res+=values[i];
                n-=nums[i];
            }
            i++;
        }
        return res;
    }
};