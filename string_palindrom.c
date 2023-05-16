#include<stdio.h>
#include<string.h>
int isPalindrome(char *str) {
  // Write your code here
  int len = strlen(str);
  char st[100];
  int i=0;
  for( i=0;*(str+i)!='\0';i++)
  {
	st[i]=*(str+len-1-i);
  }
  st[i]='\0';
  int c=strcmp(st,str);
  if(c==0) return 1;
  else return 0;
}
int main() 
{
  int t,i,j=0;
  char a[50], b[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s", a);
    if(isPalindrome(a)){
      printf("YES");
    }else{
      printf("NO");
    }
    printf("\n");
  }
}