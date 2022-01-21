#include<stdio.h>

void main()
{
    float a,b,ans;

    printf("********** AREA OF TRIANGLE **********\n");

    printf("\nEnter Base: ");
    scanf("%f",&a);
    printf("\nEnter Height: ");
    scanf("%f",&b);

    ans=(a*b)/2;
    printf("\nAnswer: %.2f\n",ans);
    printf("\n***************************************");
}
