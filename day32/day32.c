#define ROWS 50
#define COLS 50
#include<stdio.h>
void printSpiral(int a[ROWS][COLS], int r, int c) {
  // Write your code here
  int left = 0 , top = 0 , right = c-1,buttom=r-1;
  while(left<=right && top<=buttom)
  {
    for(int i=left;i<=right;i++)
    {
		printf("%d\n",a[left][i]);
    }
    top++;
    for(int j=top;j<=buttom;j++)
    {
      printf("%d\n",a[j][right]);
    }
    right--;
    if(top<=buttom)
    {
    for(int n=right;n>=left;n--)
    {
      printf("%d\n",a[buttom][n]);
    }
      }
    buttom--;
    if(left<=right)
    {  
    for(int k=buttom;k>=top;k--)
    {
      printf("%d\n",a[k][left]);
    }
      }
    left++;
  }
}

int main()
{
  int r, c;
  scanf("%d %d", &r, &c);
  int a[ROWS][COLS], i, j;
  for(i = 0; i < r; i++)
    for(j = 0; j < c; j++)
      scanf("%d", &a[i][j]);
  printSpiral(a, r, c);
  return 0;
}