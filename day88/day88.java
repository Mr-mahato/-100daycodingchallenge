/* package codechef; // don't place package name! */
// problem link : https://www.codechef.com/problems/PIZZA_BURGER
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int moneyInPocket = sc.nextInt();
            int pizzaCost = sc.nextInt();
            int burgerCost = sc.nextInt();

            if(pizzaCost<=moneyInPocket)
            {
                System.out.println("PIZZA");
            }
            else if(pizzaCost>moneyInPocket && burgerCost<=moneyInPocket)
            {
                System.out.println("BURGER");
            }
            else
            {
                System.out.println("NOTHING");
            }
        }
    }
}
