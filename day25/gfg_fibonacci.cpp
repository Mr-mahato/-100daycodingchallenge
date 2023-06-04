// This problem is being solved from gfg 
//! problem link : https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        int st = 0,end=1;
        int res = 0;
        if(n<=1) return n;
        for(int i=2;i<=n;i++)
        {
            res = (st+end)%1000000007;
            st = end;
            end = res;
        }
        return res;
    }
};