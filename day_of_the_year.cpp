class Solution {
    public int dayOfYear(String date) {
        String s[]=date.split("-");
        int year=Integer.parseInt(s[0]);
        int noOfDays=Integer.parseInt(s[2]);
        int month=Integer.parseInt(s[1]);
        int sum=0;
        int m[]={31,28,31,30,31,30,31,31,30,31,30,31};
        for(int i=0;i<month-1;i++){
            sum+=m[i];
        }
        noOfDays+=sum;
        if(month>2 && year%4==0 && ( year%400==0 || year%100!=0)){
            return noOfDays+1;
        }
        else{
            return noOfDays;
        }
    }
}