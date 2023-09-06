/* package codechef; // don't place package name! */
// this is another coding problem solved from codechef
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static int res(int x , int h){
        
        int y = x/2;
        int ans = 0;
        if(y*5>h){
             ans  = h/y;
             if((h-ans*y)!=0) return ans+1;
             else return ans;
        } 
        else 
        {
            ans =5;
            h -=y*5;
            if(h%x==0) return (ans+h/x);
            else return (ans+1+h/x);
        }
       
        
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
		    
		    int x = sc.nextInt();
		    int h = sc.nextInt();
		    
		    System.out.println(res(x,h));
		    
		}
	}
}
