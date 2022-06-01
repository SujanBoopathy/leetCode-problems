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
        
        int[] res=new int[2];
        
        return res;
    }
}