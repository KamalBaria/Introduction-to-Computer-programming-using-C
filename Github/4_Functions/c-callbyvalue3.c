#include<stdio.h>

int main()
{
    int a;
    printf("Enter A Number: ");
    scanf("%d",&a);

    printf("Number Before Increment: %d",a);
    inc(a);
    printf("\nNumber After Increment: %d",a);
}

int inc(int b)
{
    b = b+1;
    printf("\nNumber After Increment: %d",b);
}
