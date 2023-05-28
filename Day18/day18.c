#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,a,b;
	    scanf("%d%d%d",&x,&a,&b);
	    int res = (a + (100-x)*b)*10;
	    printf("%d\n",res);
	}
	return 0;
}

