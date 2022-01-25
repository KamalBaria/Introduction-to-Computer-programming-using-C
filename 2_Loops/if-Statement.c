#include<stdio.h>

void main()
{
    int num;
    printf("Enter A Number: ");
    scanf("%d",&num);

    if(num >0)
    {
        printf("%d Is Positive.",num);
    }
    if(num < 0)
    {
        printf("%d Is Negative.",num);
    }
}
