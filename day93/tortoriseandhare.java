// problem link : https://leetcode.com/problems/find-the-duplicate-number/
// refer to this article: http://keithschwarz.com/interesting/code/?dir=find-duplicate
class Solution {
    public int findDuplicate(int[] nums) {
        // lets talk about algorithm
        // algorithm use here is Tortorise and hare algorithm

        int sp,fp;
        sp = nums[0];
        fp = nums[nums[0]];
        while(sp!=fp){
            sp = nums[sp];
            fp = nums[nums[fp]];
        }

        // reset your fp here
        fp = 0;
        while(sp!=fp){
            sp = nums[sp];
            fp = nums[fp];
        }
        return fp;

    }
}
