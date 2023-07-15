import java.util.*;
public class Maxm_trapwater {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int[] ar = {4,2,0,6,3,2,5};
        int size = ar.length;

        // This is for left max boundary array
        int[] leftmax = new int[7];
        leftmax[0] = ar[0];
        int max = 0;
        for(int i=1;i<size;i++)
        {
            leftmax[i] = Math.max(ar[i],leftmax[i-1]);
        }
        System.out.println("This print the element of leftmax boundary:");
        
        for(int i=0;i<size;i++)
        {
            System.out.print(leftmax[i] + " ");
        }
        System.out.println();

        // This is for right max boundary array
        int[] rgtmax = new int[7];
        rgtmax[6] = ar[size-1];
        max = 0;
         for(int i=size-2;i>=0;i--)
        {
            
            rgtmax[i] = Math.max(ar[i],rgtmax[i+1]);
        }
        System.out.println("This print the element of rightmax boundary:");
         for(int i=0;i<size;i++)
        {
            System.out.print(rgtmax[i] + " ");
        }
        // 
        // System.out.println(size);
        System.out.println();
        int res = 0;
        for(int i=0;i<size;i++)
        {
            int tmp = Math.min(leftmax[i],rgtmax[i]);
            tmp = tmp - ar[i];
            res +=tmp;
        }
        System.out.println("The final water tap is :" + res);

        sc.close();

    }
}
