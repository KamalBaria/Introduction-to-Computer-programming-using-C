#include<stdio.h>

int a,b;
void sum()
{
    printf("The sum is %d",a+b);
}
void main()
{

    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    sum();
}

