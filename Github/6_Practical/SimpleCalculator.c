#include<stdio.h>

int main()
{
    int x,y,op;
    float r;

    printf("********** SIMPLE CALCULATOR **********\n");
    printf("\nEnter First Number X: ");
    scanf("%d",&x);

    printf("\nEnter Second Number Y: ");
    scanf("%d",&y);

    printf("\nChoose Operation To Perform:\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\nEnter Choice(1,2,3 or 4) : ");
    scanf("%d",&op);

    if(op==1)
    {
        r=x+y;
        printf("\nAddition Answer: %d + %d = %.2f\n",x,y,r);
        printf("\n***************************************");
    }
    else if(op==2)
    {
        r=x-y;
        printf("\nSubtraction Answer: %d - %d = %.2f\n",x,y,r);
        printf("\n***************************************");
    }
    else if(op==3)
    {
        r=x*y;
        printf("\nMultiplication Answer: %d * %d = %.2f\n",x,y,r);
        printf("\n***************************************");
    }
    else if(op==4)
    {
        r=x/(float)y;
        printf("\nDivision Answer: %d / %d = %.2f\n",x,y,r);
        printf("\n***************************************");
    }
    else
    {
        printf(" \nYou Have Entered Wrong Choice \n");
        printf("\n***************************************");
    }
    return 0;
}
