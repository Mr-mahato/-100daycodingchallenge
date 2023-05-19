//! this is the program that reverse the word of a string 
#include<stdio.h>
#include<string.h>
void revs(char cb[],int j,int k )
{
  int c = 0;
  int len = (k-j)+1;
  int r = j+len+j;
  printf("%d-%d \n",len,j);
  for(int i=j;i<r/2;i++)
  {

    char temp = cb[i];
    cb[i]=cb[r-1-i];
    cb[r-1-i]=temp;
    //printf("%c-%c \t",cb[i],cb[len-1-i]);
  }
}
void revWordsString(char *str) {
  // Write your code here
  int j=0;
  int len = strlen(str);
  for(int i=0;i<=len;i++)
  {
    if(str[i]==' '  || i==len)
    {
      int k = i-1;
      revs(str,j,k);
      j=k+2;
    }
  }
  printf("%s",str);
}

int main()
{
  int t,i,j=0;
  scanf("%d", &t);
  char str[10000];

  while(t--){
    scanf(" %[^\n]s",str);
    revWordsString(str);
    printf("\n");
  }
}