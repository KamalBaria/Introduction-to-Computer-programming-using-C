#include<stdio.h>

int sum(int a, int b)
{
    return a+b;
}
void main()
{
    int a,b,res;

    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    res = sum(a,b);
    printf("The sum is : %d",res);
}

