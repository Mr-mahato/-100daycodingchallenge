//problem link : https://leetcode.com/problems/build-array-from-permutation/
public class day53 {
    public int[] buildArray(int[] nums) {
        int[] res = new int[nums.length];
        for(int i =0;i<nums.length;i++)
        {
            res[i] = nums[nums[i]];
        }
        return res;
    }
}
