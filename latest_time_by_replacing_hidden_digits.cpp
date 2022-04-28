class Solution {
public:
    string maximumTime(string time) {
        int c=0;
        int a[4];
        for(int i=0;i<time.length();i++){
            if(time[i]>='0' && time[i]<='9'){
                a[c]=time[i]-'0';
            }
            if(time[i]=='?')
                a[c]=-1;
            if((time[i]>='0' && time[i]<='9' )||time[i]=='?') c++;
        }
        if(a[3]==-1)
            a[3]=9;
        if(a[2]==-1)
            a[2]=5;
        if(a[1]==-1){
            if(a[0]==2 || a[0]==-1){
                a[1]=3;
            }
            else{
                a[1]=9;
            }
        }
        if(a[0]==-1){
            if(a[1]<=3 && a[1]>=0)
                a[0]=2;
            else
                a[0]=1;
        }
        string s="";
        for(int i=0;i<4;i++){
            if(i==1)
                s+=to_string(a[i])+":";
            else
                s+=to_string(a[i]);
            
        }
        return s;
            
    }
};