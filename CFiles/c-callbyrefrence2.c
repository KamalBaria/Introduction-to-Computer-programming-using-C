#include<stdio.h>

void main()
{
    int num1,num2;
    printf("Enter Number One: ");
    scanf("%d",&num1);
    printf("Enter Number Two: ");
    scanf("%d",&num2);

    printf("Numbers Before Adding: %d, %d",num1,num2);
    ad(&num1,&num2);

    printf("\nNumbers After Adding: %d, %d",num1,num2);
    return 0;
}

int ad(int *a, int *b)
{

    *a = *a + 10;
    *b = *b * 20;


}
