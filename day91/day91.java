// problem link : https://leetcode.com/problems/minimum-right-shifts-to-sort-the-array/
class Solution {
    public int minimumRightShifts(List<Integer> nums) {
        // my first approach is to find the position of smallest number then n-pos
        // second track whether the array is rotated or not
        int val = 1002;
        int ind = 0;
        int checkSort = 0;
        int n = nums.size();
        for(int i = 0;i<nums.size()-1;i++)
        {
            if(nums.get(i)<nums.get(i+1))
            {
                checkSort++;
            }
        }
        if(nums.get(n-1)<nums.get(0))
        {
            checkSort++;
        }
        if(checkSort!=n-1)
        {
            return -1;
        }
        for(int i = 0;i<nums.size();i++)
        {
            if(nums.get(i)<val)
            {
                val = nums.get(i);
                ind = i;
            }
        }

        int ans = nums.size()-ind;
        if(ans==nums.size())
        {
            return 0;
        }
        else return ans;
    }
}