// The basic and simple program to learn dynamic memory allocation with hands on practice 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Taking input as total number:\n");
    scanf("%d",&n);    
    int *ptr = malloc(sizeof(int)*n);
    printf("Taking input form user :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Printing the result before reallocating this:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    int *ptr_new = realloc(ptr,sizeof(int)*2);
    printf("\nTaking input for reallocated space :\n");
    for(int i=5;i<7;i++)
    scanf("%d",&ptr_new[i]);
    printf("Printing the final array:\n");
    for(int i=0;i<n+2;i++)
    {
        printf("%d ",ptr_new[i]);
    }

return 0;
}