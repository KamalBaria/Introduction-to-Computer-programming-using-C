#include<stdio.h>

void main ()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    int i;

    printf("Array :");
    for(i = 0; i< 5; i++)
    {
        printf(" %d ",*(p+i));
    }
}
