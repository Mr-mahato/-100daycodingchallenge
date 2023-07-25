//problem link : https://leetcode.com/problems/container-with-most-water/description/
//problem is about finding the max voulume which it can store the water in it
public class day50 {
    public int maxArea(int[] height) {
        int ln = height.length;
        int ans = 0;
        int temp = ln-1;
        int p = 0,q = ln-1;
        for(int i=0;i<ln;i++)
        {
            if(height[p]<height[q])
            {
                ans = Math.max(ans, height[p] * temp);
                p++;
                temp--;
            }
            else
            {
                ans = Math.max(ans,height[q]*temp);
                q--;
                temp--;
            }

        }
        return ans;
    }
}
