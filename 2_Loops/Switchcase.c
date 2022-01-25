#include<stdio.h>

void main()
{
    int x;
    printf("Enter A Number(1,2 or 3): ");
    scanf("%d",&x);

    switch(x)
    {
    case 1:
        printf("Number is 1.");
        break;
    case 2:
        printf("Number is 2.");
        break;
    case 3:
        printf("Number is 3.");
        break;
    default:
        printf("Not 1,2 or 3.");
    }
}
