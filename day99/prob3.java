public class prob3 {
    /* package codechef; // don't place package name! */

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
                int c = 1;
                int[] arr  = new int[n];
                int mini = Integer.MAX_VALUE;
                int sum = 0;
                for(int i = 0;i<n;i++)
                {
                    arr[i] = sc.nextInt();
                    mini = Math.min(mini,arr[i]);
                }
                for(int j = 0;j<n;j++)
                {
                    if(arr[j]==mini &&c==1)
                    {
                        c--;
                        continue;
                    }
                    else
                    {
                        sum +=arr[j];
                    }
                }
                System.out.println(sum);
            }
        }
    }

}
