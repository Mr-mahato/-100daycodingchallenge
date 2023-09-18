/* package codechef; // don't place package name! */
// problem link : https://www.codechef.com/problems/LOSTWKND
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
            int[] weekDays= new int[5];
            for(int i = 0;i<5;i++)
            {
                weekDays[i] = sc.nextInt();
            }

            int extraHour = sc.nextInt();
            int sum = 0;
            int totalHour  = 24*5;

            for(int i = 0;i<5;i++)
            {
                weekDays[i] *=extraHour;
                sum +=weekDays[i];
            }

            if(sum<=totalHour)
            {
                System.out.println("No");
            }
            else
            {
                System.out.println("Yes");
            }
        }
    }
}
