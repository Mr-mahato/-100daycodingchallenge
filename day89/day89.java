/* package codechef; // don't place package name! */
// problem link: https://www.codechef.com/problems/MASKPOL
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
            int totalPeople = sc.nextInt();
            int infectedPeople = sc.nextInt();
            int remainSafe = totalPeople-infectedPeople;
            if(remainSafe>infectedPeople)
            {
                System.out.println(infectedPeople);
            }
            else if(remainSafe==0)
            {
                System.out.println(0);
            }
            else System.out.println(remainSafe);
        }
    }
}
