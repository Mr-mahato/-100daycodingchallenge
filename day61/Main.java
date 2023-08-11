import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner sc  = new Scanner(System.in);
        System.out.println("Enter the value of x and y: ");
        int num1 = sc.nextInt() , num2 = sc.nextInt();

        // lets create a obj
        var calc = new calculate(num1,num2);
        System.out.println("Enter teh operation that you want to perform : ");
        String op = sc.next();

        int ans=0;

        switch(op)
        {
            case "+" : ans = calc.sum(); break;
            case "-" : ans = calc.sub();break;
            case "*" : ans = calc.prod();break;
            case "/" : ans = calc.divide();break;
            default: System.out.println("Invalid input !!");
        }

        System.out.println(num1 + op + num2 + "=" + ans);
    }

}
