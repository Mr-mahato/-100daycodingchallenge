/* package codechef; // don't place package name! */
// this is the coding problem solved from codechef
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
		    int n  = sc.nextInt();
		    long[] arr = new long[n];
		    //long[] arr = new long(n);
		    for(int i =0;i<n;i++)
		    {
		        arr[i] = sc.nextLong();
		    }
		    long sum = 0;
		    
		    for(int i =0;i<n;i++)
		    {
		        for(int j = i+1;j<n;j++)
		        {
		            sum += arr[i]*arr[j];
		        }
		    }
		    System.out.println(sum);
		    
		    
		    
		    
		}
	}
}
