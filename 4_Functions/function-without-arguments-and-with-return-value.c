#include<stdio.h>
int a,b;
int sum()
{
    return a+b;
}
void main()
{
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum();
    int res = sum();
    printf("Sum : %d",res);
}

