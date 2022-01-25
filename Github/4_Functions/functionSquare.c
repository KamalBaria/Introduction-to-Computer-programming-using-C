#include<stdio.h>

void sq(num)
{
    int res;
    res = num * num;

    printf("Square: %d",res);

}

void main()
{
    int x;
    printf("Enter A Number: ");
    scanf("%d",&x);
    sq(x);

}
