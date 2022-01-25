#include<stdio.h>

int x = 100;
float y = 0.5;
float z;

void main()
{
    z = x * y;
    printf("Multiply %d * %0.1f: %0.1f",x,y,z);
}
