#include<stdio.h>

int add()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    return a+b;
}
int main ()
{
    int result;
    int (*ptr)();
    ptr = &add;
    result = (*ptr)();

    printf("The sum is %d",result);
}

