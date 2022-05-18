class Solution {
public:
    bool judgeCircle(string moves) {
        map<char,int> mp;
        for(int i=0;i<moves.length();i++){
            mp[moves[i]]++;
        }
        int c=abs(mp['U']-mp['D']);
        int d=abs(mp['L']-mp['R']);
        if(c || d)
            return false;
        else
            return true;
    }
};