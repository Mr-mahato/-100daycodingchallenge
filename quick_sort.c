#include<stdio.h>
int partition(int a[] , int l ,int u)
{
	int piv = a[l];
	int start=l,end=u;
	while(start<end)
	{

	while(a[start]<=piv)
	{
		start++;
	}
	while(a[end]>piv)
	{
		end--;
	}
	if(start<end)
	{
		//swap(&a[start],&a[end]);
		int temp = a[start];
		a[start] = a[end];
		a[end ] = temp;
	}
		//swap(&a[end],&a[l]);
		if(end<start)
		{

		int temp = a[end];
		a[end] = a[l];
		a[l]=temp;
	   return end;
		}
	}
}
void quicksort(int a[],int l , int u)
{
	if(l<u)
	{
		int loc = partition(a,l,u);
		quicksort(a,l,loc-1);
		quicksort(a,loc+1,u);
	}
}
int main()
{
	// int arr[5] = {5,2,1,8,10};
	int arr[10];
	for(int i=0;i<10;i++) scanf("%d",&arr[i]);
	int l = 0,h= 9;
	quicksort(arr,l,h);

	for(int i=0;i<10;i++) printf("%d ",arr[i]);

return 0;
}