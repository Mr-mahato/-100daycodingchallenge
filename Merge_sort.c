// This program performs mergesort whose time complexity is O(nlogn)
#include<stdio.h>
void merge(int a[] ,int l ,int m, int h)
{
    int i = l,j =m+1,k = l;
    int temp[h];
    while(i<=m && j<=h)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    if(i>m)
    {
        while(j<=h)
        {
            temp[k++] = a[j++];
        }

    }
    else{
        while(i<=m)
        {
            temp[k++] = a[i++];
        }
    }
    for(int i=l;i<=h;i++)
    {
        a[i]= temp[i];
    }
}
void mergesort(int a[], int l ,int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        mergesort(a,l,mid);
        mergesort(a, mid+1,h);
        merge(a,l,mid,h);
    }
}
int main()
{
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int l= 0 , h = 9;
    mergesort(arr,l,h);
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}