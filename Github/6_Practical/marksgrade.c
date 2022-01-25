#include<stdio.h>

void main()
{
    float marks;
    printf("Enter Marks Obtained(out of 100): ");
    scanf("%f",&marks);

    if(marks>=33&&marks<=100)
    {
        printf("\nYou Have Passed The Exam.\n");
    }
    else if(marks<33&&marks>=0)
    {
        printf("\nYou Have Failed The Exam.\n");
    }
    else
    {
        printf("\nEnter Valid Marks.\n");
    }
    return 0;
}
