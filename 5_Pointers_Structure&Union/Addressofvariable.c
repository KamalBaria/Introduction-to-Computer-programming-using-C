#include<stdio.h>

void main()
{
    int x = 10;
    int *y;
    y = &x;

    printf("Address of X: %x",y);
    printf("\nValue of X: %d",*y);
}
