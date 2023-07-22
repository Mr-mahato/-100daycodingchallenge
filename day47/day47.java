    // problem link :   https://leetcode.com/problems/maximum-product-subarray/
class Solution {
    public int maxProduct(int[] nums) {
        int ln = nums.length;
        int res = 1;
        int res1 = 1;
        int prod = Integer.MIN_VALUE;
        int prd1 = Integer.MIN_VALUE;

        for(int i=0;i<ln;i++)
        {
            res *=nums[i];
            res1 *=nums[ln-1-i];
            prod = Math.max(prod,res);
            prd1 = Math.max(prd1,res1);
            if(res==0)
            {
                res  = 1;
            }
            if(res1==0)
            {
                res1 = 1;
            }
        }
        int ans = Math.max(prd1,prod);
        // res = 1;
        // for(int j = ln-1;j>=0;j--)
        // {
        //     res *= nums[j];
        //     prod = Math.max(prod,res);
        //     if(res==0)
        //     res = 1;
        // }
        return ans;
    }
}