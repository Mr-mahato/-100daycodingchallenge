/* 
int Stack[SIZE], top = -1;
Above variables are used for Stack, SIZE and top and all are global variables. */
// Function to check if stack is full.
#include<stdio.h>

#define SIZE 1000

int Stack[SIZE], top = -1;
int isFull()
{
	return top==SIZE-1;
}
// Function to check if stack is empty.
int isEmpty()
{
	return top==-1;
}
// Function to add an item to stack.
int push(int item)
{
  if(isFull())
  {
    printf("Overflow");
    return ;
  }
	Stack[++top] = item;
}
// Function to remove an item from stack.
int pop()
{
  if(isEmpty())
  {
    return -1;
  }
	top = top-1;
  return Stack[top+1];
}

int main()
{
  int t, n, q1, q2;
  scanf("%d", &t);
  while(t--)
  {
    top = -1;
    scanf("%d", &n);
    while(n--)
    {
      scanf("%d", &q1);
      if(q1 == 1){
        scanf("%d", &q2);
        push(q2);
      }
      else
        printf("%d ", pop());
    }
    printf("\n");
  }
  return 0;
}