//  Problem link: https://practice.geeksforgeeks.org/problems/max-min/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// The problem is to find the sum of min and max in given array

class Solution
{ 
    public static int findSum(int A[],int N) 
    {
        //code here
        int min = 100000,max = -100000;
        for(int i=0;i<A.length;i++)
        {
            if(A[i]<min)
            {
                min = A[i];
            }
            if(A[i]>max)
            {
                max = A[i];
            }
        }
        int res = min + max;
        return res;
    }
}