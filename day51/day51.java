
//problem link : https://leetcode.com/problems/climbing-stairs/
public class day51 {
    public int climbStairs(int n) {
        // this problem is about finding the fibonacci sum
        if(n==2 || n==1) return n;
        int[] ans  = new int[n];
        ans[0] = 1;
        ans[1] = 2;
        for(int i=2;i<n;i++)
        {
            ans[i] =ans[i-1] + ans[i-2];
        }
        return ans[n-1];

    }
}
