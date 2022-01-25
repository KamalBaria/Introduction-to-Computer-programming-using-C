#include<stdio.h>

int main()
{
int a=10,b=20;
int *p1=&a,*p2=&b;

printf("Before swap: Number 1: %d ,Number 2: %d\n",*p1,*p2);

*p1 = *p1 + *p2;
*p2 = *p1 - *p2;
*p1 = *p1 - *p2;

printf("\nAfter swap: Number 1: %d ,Number 2: %d\n",*p1,*p2);

return 0;
}
