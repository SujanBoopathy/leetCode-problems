class Solution {
public:
    bool judgeCircle(string moves) {
        map<char,int> mp;
        for(int i=0;i<moves.length();i++){
            mp[moves[i]]++;
        }
        int c=(mp['U']-mp['D'])+(mp['L']-mp['R']);
        if(c)
            return false;
        else
            return true;
    }
};