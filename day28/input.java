import java.util.*;
public class input {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
 
        String name = sc.next();
        System.out.println(name);

        int num = sc.nextInt();
        System.out.println(num);

        boolean bh = sc.nextBoolean();
        System.out.println(bh);
        sc.nextLine();

        String fullname = sc.nextLine();  // This will print the full name nomatter if there is space or not in the line
        System.out.println(fullname);
        float age = sc.nextFloat();
        System.out.println(age);
        
        sc.close();
    }
}
