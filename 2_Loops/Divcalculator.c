// C program to find quotient
// and remainder of two numbers

#include <stdio.h>

void main()
{
    int a,b;
    float c,d;
    printf("enter dividend:");
    scanf("%d",&a);
    printf("\nenter divisor:");
    scanf("%d",&b);

    if(b==0)
        {
            printf("b can't be 0");
        }
    else
        {
            c=a/(float)b;
            d=a%b;
            printf("\na/b = %.2f",c);

            printf("\n\na % b = %.2f\n",d);
        }


    return 0;
}

