// This problem is being solved from codequotient 
// which will spell the number on the basic of given num

#include<stdio.h>
void intToWord(int num) {
  // Write your code here
  char *ones[]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char *tens[]={" ", " " , "twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
  if(num<20)
  {
    printf("%s",ones[num]);
  }
  else if(num<100)
  {
    printf("%s ",tens[num/10]);
    intToWord(num%10);
  }
  else if(num<1000)
  {
    printf("%s hundred",ones[num/100]);
    if(num%100==0)
    {
      return;
    }
    else printf(" ");
    intToWord(num%100);
  }
  else if(num<20000)
  {
    printf("%s thousand ",ones[num/1000]);
    intToWord(num%1000);
  }
  else if(num<100000)
  {
    printf("%s ",tens[num/10000]);
    intToWord(num%10000);
  }
  else if(num<1000000)
  {
    printf("%s lakhs ",ones[num/100000]);
    intToWord(num%100000);
  }
}
int main()
{
  int t,i,j=0;
  char a[50], b[50];
  scanf("%d", &t);
  while(t--)
  {
    scanf("%d", &i);
    intToWord(i);
    printf("\n");
  }
}