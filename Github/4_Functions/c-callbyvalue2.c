#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter Number One: ");
    scanf("%d",&num1);
    printf("Enter Number Two: ");
    scanf("%d",&num2);

    printf("Numbers Before Adding: %d, %d",num1,num2);
    add(num1,num2);
    printf("\nNumbers After Adding: %d, %d",num1,num2);
}

int add(int a, int b)
{
    int c = a + b;

    printf("\nNumber After Addition: %d",c);
}
