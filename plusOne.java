import java.util.*;
public class plusOne {

    public static int[] plusOnew(int[] digits) {
        int len=digits.length;
        for(int i=len-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
        int na[]=new int[len+1];
        na[0]=1;
        return na;
    }
    

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a[]=new int[3];
        for(int i=0;i<3;i++){
            a[i]=sc.nextInt();
        }
        int b[]=new int[4];
        b=plusOnew(a);
        for(int i=0;i<4;i++){
            System.out.println(b[i]);
        }
    }
}