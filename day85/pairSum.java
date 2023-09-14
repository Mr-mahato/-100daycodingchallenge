// this will find the pair sum in the given array
import java.util.*;
public class pairSum {
    public static void main(String[] args){
//        System.out.println("HI mom");
        // you are given a array you have to find the sum of pair equals to k
        int[] arr = {3,5,-4,8,11,1,-1,6};
        int key = 10;
        // lets try BRUTE FORCE technique ie:
        for(int i =0;i<arr.length;i++)
        {
            for(int j = i+1;j<arr.length;j++)
            {
                int sum = arr[i] + arr[j];
                if(sum==key)
                {
                    System.out.println("Found the key with pair");
                    break;
                }
            }
        }
        // but the worst thing is that it tooks O(n^2) complexity
//        System.out.println
    }

}
