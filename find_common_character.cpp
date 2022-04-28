class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int> finalCount;
        for(char i='a';i<='z';i++){
            finalCount[i]=100;
        }
        unordered_map<char,int> count;
        for(string& word:words){
            count.clear();
            for(char c:word){
                count[c]++;
            }
            for(char c='a';c<='z';c++){
                finalCount[c]=min(finalCount[c],count[c]);
            }
        }
        vector<string> v;
        int times;
        string s;
        for(char c='a';c<='z';c++){
            times=finalCount[c];
            s=c;
            while(times--){
                v.push_back(s);
            }
        }
        return v;
    }
};