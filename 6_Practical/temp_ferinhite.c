#include<stdio.h>

void main()
{
    float c,f;

    printf("Enter Centigrade: ");
    scanf("%f",&c);

    f = (1.8*c) + 32;

    printf("\nTemperature in Fahrenheit: %.2f\n",f);

}
