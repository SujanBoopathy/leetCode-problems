class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        for(int i=0;i<logs.size();i++){
            if(logs[i]=="./")
                count+=0;
            else if(logs[i]=="../")
            {
                if(count>=1)
                    count--;
            }
            else
                count++;
        }
        if(count<0) return 0;
        return count;
    }
};