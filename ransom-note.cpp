class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        //bucket is used to count the alphabet by its ascii key value;
        int count[256]={0};
        for(int i=0;i<ransomNote.length();i++){
            count[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.length();i++){
            if(count[magazine[i]]>0){
                count[magazine[i]]--;
            }
        }
        for(int i=0;i<256;i++){
            if(count[i]!=0)
                return false;
        }
        return true;
        
    }
};