// this program solve the basic question of codechef
// dificulty level:852
// link:https://www.codechef.com/problems/INCREAR

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x ,y;
	    scanf("%d%d",&x,&y);
	    int c=0;
	    if(x<=y)
	    {
	        printf("%d\n",y-x);
	    }
	    else if((x-y)%2==0)
	    {
	        c = (x-y)/2;
	        printf("%d\n",c);
	    }
	    else
	    {
	        c = (x-y)/2;
	        printf("%d\n",c+2);
	    }
	}
	return 0;
}

