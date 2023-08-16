 public static int optimised(int x , int n)
    {
        if(n==0) return 1;
        int res = optimised(x, n/2)*optimised(x, n/2);
        if(n%2==0) return res;
        else return x*res;
    }