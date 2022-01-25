#include<stdio.h>

void main()
{
    float num;
    printf("Enter A Number: ");
    scanf("%f",&num);

    if(num>0)
    {
        printf("\nEntered Number %.2f Is Positive.\n",num);
    }
    else if(num<0)
    {
        printf("\nEntered Number %.2f Is Negative.\n",num);
    }
    else
    {
        printf("\nEntered Number %.2f Is Zero.\n",num);
    }
    return 0;
}
