// this is the problem of next day challenge in coding ninjas
import java.util.* ;
import java.io.*; 
public class Solution {
  public static int sumOfMaxMin(int[] arr, int n) {
      // Write your code here.
      int maxi = Integer.MIN_VALUE;
      int mini = Integer.MAX_VALUE;
      for(int i =0;i<n;i++)
      {
        maxi = Math.max(maxi,arr[i]);
        mini = Math.min(mini,arr[i]);
      }
      return maxi+mini;
  }
}