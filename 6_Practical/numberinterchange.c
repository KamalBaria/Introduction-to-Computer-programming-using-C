#include<stdio.h>

void main()
{
    float a,b,c;
    printf("********** NUMBER INTERCHANGE **********\n");

    printf("\nEnter First Number: ");
    scanf("%f",&a);
    printf("\nEnter Second Number: ");
    scanf("%f",&b);

    c=a;
    a=b;
    b=c;

    printf("\nNumber After Interchange\n");
    printf("\nFirst Number: %.2f",a);
    printf("\n\nSecond Number: %.2f",b);
    printf("\n\n***************************************");
}
