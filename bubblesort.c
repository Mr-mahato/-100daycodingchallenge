#include<stdio.h>
void bubblesort(int a[] , int s)
{
    for(int i=0;i<s-1;i++)
    {
        for(int j =0;j<s-1-i;j++)
        {
            if(a[j+1]>a[j])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0;i<s;i++)
    printf("%d ",a[i]);
}
int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n];
    printf("Taking input from user \n");
        for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
return 0;
}