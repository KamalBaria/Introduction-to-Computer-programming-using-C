#include<stdio.h>

int main()
{
    int i, n;
    int num1 = 0, num2 = 1;
    int numt = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", numt);
        num1 = num2;
        num2 = numt;
        numt = num1 + num2;
    }
  return 0;
}


