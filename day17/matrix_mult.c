// Print the resultant matrix after (A * B)
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
//! this is the simple program to find the matrix multiplication of two matrix
void multiplyMatrix(int A[SIZE][SIZE],int B[SIZE][SIZE],int R1,int C1,int R2,int C2)
{
  // Write your code here
  int res[R1][C2];
  for(int i=0;i<R1;i++)
  {
    for(int j=0;j<C2;j++)
    {
      res[i][j]=0;
      for(int k=0;k<R2;k++)
      {
        res[i][j] += A[i][k]*B[k][j];
      }
      printf("%d ",res[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int t;
  scanf("%d",&t);
  while(t--){
    int r1,c1,r2,c2;
    scanf("%d%d",&r1,&c1);
    int A[SIZE][SIZE];
    for(int i = 0; i<r1; i++){
      for(int j = 0; j<c1; j++){
        scanf("%d", &A[i][j]);
      }
    }
    scanf("%d%d",&r2,&c2);
    int B[SIZE][SIZE];
    for(int i = 0; i<r2; i++){
      for(int j = 0; j<c2; j++){
        scanf("%d", &B[i][j]);
      }
    }
    multiplyMatrix(A,B,r1,c1,r2,c2);
  }
  return 0;
}