#include<stdio.h>

int main()
{
    int marks;
    printf("Enter Your Marks:");
    scanf("%d",&marks);

    if(marks>85&&marks<=100)
    {
        printf("Your Grade is A.");
    }
    else if(marks>60&&marks<=85)
    {
        printf("Your Grade is B.");
    }
    else if(marks>40&&marks<=60)
    {
        printf("Your Grade is C.");
    }
    else if(marks>30&&marks<=40)
    {
        printf("Your Grade is D.");
    }
    else
    {
         printf("You Fail.");
    }
}
