/* package codechef; // don't place package name! */
// problem link : https://www.codechef.com/problems/HEADBOB
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
            int n = sc.nextInt();
            String dataInRail = sc.next();

            int flag = 0;
            for(int i = 0;i<n;i++)
            {
                if(dataInRail.charAt(i)=='I')
                {
                    flag = 1;
                    System.out.println("INDIAN");
                    break;
                }
                else if(dataInRail.charAt(i)=='Y')
                {
                    flag = 1;
                    System.out.println("NOT INDIAN");
                    break;
                }
            }
            if(flag ==0)
            {
                System.out.println("NOT SURE");
            }
        }
    }
}
