#include<stdio.h>

void main()

{
    float km,m,feet,inch,cm;

    printf("Enter Kilometer: ");
    scanf("%f",&km);

    m = km*1000;
    feet = km*3280.84;
    inch = km*39370.1;
    cm =  km*100000;

    printf("\nKilometer In Meter: %.2f\n",m);
    printf("\nKilometer In Feet: %.2f\n",feet);
    printf("\nKilometer In Inch: %.2f\n",inch);
    printf("\nKilometer In Centimeter: %.2f\n",cm);
}
