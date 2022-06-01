class Solution {
    
    public int[] constructRectangle(int area) {
        int a=0,b=0;
        int m=Integer.MIN_VALUE;
        // List<Integer> minimum=new ArrayList<>();
        List<Integer> list=new ArrayList<>();
        for(int i=1;i<=Math.sqrt(area);i++){
            if(area%i==0)
                list.add(i);
        }
        for(int i=0;i<list.size();i++){
            int temp=list.get(i);
            int diff=(area/temp)-temp;
            if(diff<minVal){
                minVal=diff;
                a=area/temp;
                b=temp;
            }
        }
        int[] res=new int[2];
        
        return res;
    }
}