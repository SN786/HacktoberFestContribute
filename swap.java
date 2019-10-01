import java.util.Scanner;//scanner class

public class swap {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a=s.nextInt();
        int b=s.nextInt();//Accepting values

        //Swapping without a temporary variable
        a=b-a;
        b=b-a;
        a=b+a;
        
        System.out.println(a + " " + b);//Printing
    }
}
