#include<stdio.h>

void main()
{
    float a,b,c;

    printf("Enter First Number:");
    scanf("%f",&a);

    printf("\nEnter Second Number:");
    scanf("%f",&b);

    printf("\nEnter Third Number:");
    scanf("%f",&c);

    if(a>b&&a>c)
    {
        printf("\nFirst Number %.2f Is Greater.\n",a);
    }
    else if(b>a&&b>c)
    {
        printf("\nSecond Number %.2f Is Greater.\n",b);
    }
    else if(c>a&&c>b)
    {
        printf("\nThird Number %.2f Is Greater.\n",c);
    }
    else if(a=b=c)
    {
        printf("\nAll Number Are Equal.\n");
    }
    else
    {
        printf("\nEnter Valid Number.");
    }
    return 0;
}
