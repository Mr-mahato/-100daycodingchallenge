import java.util.* ;
import java.io.*; 

public class Solution {

    static int largestElement(int[] arr, int n) {
        // Write your code here.
        int maxi = Integer.MIN_VALUE;
        for(int a:arr)
        {
           maxi =  Math.max(maxi,a);
        }
        return maxi;
    }

}