class Solution {
public:
    char repeatedCharacter(string s) {
        int arr[26];
        char res='a';

        for(int i=0;i<s.length();i++){
            if(arr[s[i]-'a']==1){
                return s[i];
            }
            else{
                arr[s[i]-'a']=1;
            }
        }
        return res;
    }
};
