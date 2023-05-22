#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	       int j=i+1;
	       if(arr[i]==arr[j] && j<n)
	       {
	           c++;
	       }
	    }
	    printf("%d\n",c);
	}
	return 0;
}

