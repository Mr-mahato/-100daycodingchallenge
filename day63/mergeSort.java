class Solution {
    public static void merge(int[] a , int l , int m , int h)
    {
        int i = l ,  j = m+1,k = 0;
        int[] temp = new int[h-l+1];
        while(i<=m && j<=h)
        {
            if(a[i]<=a[j]){temp[k++] = a[i++];}
            else {temp[k++] = a[j++];}
        }
        while(i<=m)
        {
            temp[k++] = a[i++];
        }
        while(j<=h)
        {
            temp[k++] = a[j++];
        }

        for(int c = l;c<=h;c++)
        {
            a[c] = temp[c-l];
        }

    }
    public static void mergesort(int[] a , int l , int h)
    {
        if(l<h)
        {
            int mid = l+(h-l)/2;
            mergesort(a,l,mid);
            mergesort(a,mid+1,h);
            merge(a,l,mid,h);
        }

    }
    public int[] sortArray(int[] nums) {
        int n = nums.length;
        mergesort(nums,0,n-1);
        return nums;
    }
}