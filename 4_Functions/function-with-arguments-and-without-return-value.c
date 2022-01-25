#include<stdio.h>

void sum(int a, int b)
{
    printf("The sum is %d",a+b);
}

void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum(a,b);
}

