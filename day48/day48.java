//import java.util.*;
//public class day48 {
//    public static int ceil(int[] ar , int n , int x)
//    {
//        int low = 0;
//        int high = n-1;
//        int ans = -1;
//        while(low<=high)
//        {
//            int mid = low+(high-low)/2;
//            if(ar[mid]>=x)
//            {
//                ans = ar[mid];
//                high = mid-1;
//            }
//            else
//            {
//                low  = mid-1;
//            }
//        }
//        return ans;
//    }
//    public static void main(String[] args)
//    {
//        Scanner sc = new Scanner(System.in);
//        int n = sc.nextInt();
//        int x = sc.nextInt();
//        int[] arr = new int[n];
//        for(int i=0;i<n;i++)
//        {
//            arr[i] = sc.nextInt();
//        }
//
//        // program to find the ceil : smallest number in array where number >=x;
//        System.out.println("The ceil of given array is:" + ceil(arr,n,x));
//        sc.close();
//
//    }
//}
import java.util.*;
public class day48 {
    public static int ceil(int ar[] , int x)
    {
        int low = 0;
        int high = ar.length-1;
        int ans = -1;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(ar[mid]>=x)
            {
                ans = ar[mid];
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return ans;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements:");
        int n  = sc.nextInt();
        System.out.print("Enter the value of x:");
        int x = sc.nextInt();

        System.out.println("Enter the elements of array:");
        int[] arr = new int[n];

        for(int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
        }

        for(int j=0;j<n;j++)
        {
            System.out.print(arr[j] + " ");
        }

        System.out.println("Now i am finding the ceil of the given array with given x value:");
        System.out.println(ceil(arr,x));
    }
}
