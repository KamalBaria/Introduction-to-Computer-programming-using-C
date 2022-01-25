#include<stdio.h>

void swap(int *a,int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int x,y;

    printf("Enter First Number: ");
    scanf("%d",&x);
    printf("Enter Second Number: ");
    scanf("%d",&y);

    printf("\nNumber Before Swapping: %d,%d",x,y);

    swap(&x,&y);

    printf("\nNumber After Swapping: %d,%d",x,y);

    return 0;
}
