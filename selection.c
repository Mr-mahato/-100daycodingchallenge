// this is the simple program of selection sort
#include<stdio.h>
void selection(int c[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(c[min]>c[j])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            int temp = c[min];
            c[min] = c[i];
            c[i] = temp;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Taking input from user in array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection(arr,n);
    printf("\nPrinting after sorting:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

return 0;
}