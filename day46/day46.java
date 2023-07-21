// This program will illustrate the charAt method in java
import java.util.*;
public class charat {
    public static void charmethod(String name)
    {
        System.out.println("I am inside charmethod function:");
        for(int i=0;i<name.length();i++)
        {
            System.out.print(name.charAt(i) + " ");
        }
    } 
    public static void check(char[] thau)
    {
        for(int j=0;j<thau.length;j++)
        {
            System.out.print(thau[j] + " ");
        }
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        char[] location = {'N','E','P','A','L'};

        String fullName = sc.nextLine();
        charmethod(fullName);
        System.out.println();
        check(location);

        sc.close();
    }
}
