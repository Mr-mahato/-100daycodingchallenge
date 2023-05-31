#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int arr[3];
	    for(int i=0;i<3;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    int b[3];
	    for(int i=0;i<3;i++)
	    {
	        scanf("%d",&b[i]);
	    }
	    int on=0,no=0;
	    for(int i=0;i<3;i++)
	    {
	        if(arr[i]==1)
	        {
	            on++;
	        }
	        if(b[i]==1)
	        {
	            no++;
	        }
	    }
	    if(on==no)
	    {
	        printf("Pass\n");
	    }
	    else printf("Fail\n");
	}
	return 0;
}

