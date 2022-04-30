class Solution {
    public int[] countBits(int n) {
        String s[]=new String[n];
        for(int i=0;i<=n;i++){
            s[i]=Integer.toBinaryString(i);
        }
        List<Integer> lst=new ArrayList<Integer>();
        for(int i=0;i<=n;i++){
            String temp=s[i];
            int c=0;
            for(int j=0;j<temp.length();j++){
                if(temp.charAt(j)=='1')
                    c++;
            }
            lst.add(c);
        }
        int[] r=new int[lst.size()];
        int i=0;
        for(int a:lst){
            r[i]=a; i++;
        }
        return r;
        
    }
}