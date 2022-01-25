#include<stdio.h>

void main()
{
    float p,r,t,s;
    printf("********** SIMPLE INTEREST **********\n");
    printf("\nEnter Principle Amount: ");
    scanf("%f",&p);

    printf("\nEnter Rate Of Interest: ");
    scanf("%f",&r);

    printf("\nEnter Time: ");
    scanf("%f",&t);

    s=(p*r*t)/100;

    printf("\nSimple Interest: %.2f \n",s);
    printf("\n***************************************");

}
