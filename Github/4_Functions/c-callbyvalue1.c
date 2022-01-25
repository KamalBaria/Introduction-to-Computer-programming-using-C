#include<stdio.h>

int a;

void main()
{
    printf("Enter A Number: ");
    scanf("%d",&a);
    printf("\nNumber Before Squaring: %d\n",a);
    squ(a);
    printf("\nNumber After Squaring: %d\n",a);
}

int squ(int s)
{
    s = s*s;

    printf("\nSquare Number: %d\n",s);
}
