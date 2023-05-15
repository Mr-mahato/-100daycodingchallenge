// this program make the inverse of the string
#include<stdio.h>
#include<string.h>
int main()
{
    char nam[10]="chandu";
    
    printf("%s",strrev(nam));  // this funciton is goona give error in gcc
    // as gcc dont have strrev function in its built in library

return 0;
}