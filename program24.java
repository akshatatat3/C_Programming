import java.util.Scanner;

public class program24
{
    public static void main(String A[]) 
    {
        Scanner scanner = null;
        String sName = null;

        scanner = new Scanner(System.in);

        System.out.println("Enter your name : ");
        sName = scanner.next();    // in this we not use next line because it gives next word only if we wont remaning word we can use _ underscore sign then it will give whole line 
                                             // like Akshu_tat
        System.out.println("Welcome "+sName);

  
    }

    
}