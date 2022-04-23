class Solution {
public:
    int countE(int x,vector<int> n){
        int c=0;
        for(int i=0;i<n.size();i++){
            if(n[i]==x){
                c++;
            }
        }
        return c;
    }
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int m=0,maxElement;
        for(int i : s){
            if(m<countE(i,nums)){
                m=countE(i,nums);
                maxElement=i;
            }
        }
        
        return maxElement;
    }
};