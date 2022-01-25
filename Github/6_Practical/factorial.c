#include<stdio.h>

int factorial(int num)
{
    if(num==1)
        return 1;
    else
        return(num * factorial(num - 1));
}
int main()
{
    int a,b;
    printf("Enter Number: ");
    scanf("%d",&a);
    b = factorial(a);
    printf("The Factorial Of the Number %d is : %d",a,b);
}
