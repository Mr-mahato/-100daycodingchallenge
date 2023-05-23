// ! this program makes the string as per the dictionary 
#include<stdio.h>
#include<string.h>
void sortStrings(int n, char str[][50]) {
  // Write your code here
	for(int i=0;i<n;i++)
    {
    	for(int j = i+1;j<n;j++)
        {
          int x = strcmp(str[i],str[j]);
          if(x>0)
          {
            char temp[50];
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
            //str[j]=temp;
          }
        }
    }
  for(int i=0;i<n;i++)
  {
     printf("%s",str[i]);
    if(i<n-1) printf(" ");
  }
}
#include<string.h>
int main()
{
 int t,i,j=0;
  char a[10][50], b[50];
  scanf("%d", &t);
  while(t--)
  {
    scanf("%d", &i);
    j=i;
    while(i--)
    {
      scanf("%s", a[i]);
    }
    sortStrings(j, a);
    printf("\n");
  }
return 0;
}