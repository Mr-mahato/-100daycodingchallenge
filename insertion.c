// this program is the demo of insertion sorting

#include<stdio.h>
int main()
{
	int arr[5] = {15,11,14,12,18};
	for(int i=1;i<5;i++)
	{
		int key = arr[i];
		int j = i-1;
		while(j>=0 && key<arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	for(int i=0;i<5;i++)
	printf("%d ",arr[i]);

return 0;
}