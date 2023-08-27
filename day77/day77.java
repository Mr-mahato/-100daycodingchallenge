public class Solution {
    public static int[] countFrequency(int n, int x, int []nums){
        // Write your code here.
        int[] arr = new int[n];
        for(int i =0; i < n; i++){
            arr[i] = 0;
        }
        for(int i=0; i<n; i++){
            if(nums[i] > n) continue;
            arr[nums[i]-1]++; 
        }
        return arr;
    }
}