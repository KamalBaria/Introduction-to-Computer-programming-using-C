#include<stdio.h>

int main()
{
    char d='y';
    int a,b,x,y,z;

    do
    {
    printf("Enter X:");
    scanf("%d",&x);
    printf("\nEnter Y:");
    scanf("%d",&y);
    printf("\nEnter Your Choice");
    printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Exit \nEnter:");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        z=x+y;
        printf("Addition Answer: %d",z);
        break;
        case 2:
        z=x-y;
        printf("Subtraction Answer: %d",z);
        break;
        case 3:
        z=x*y;
        printf("Multiplication Answer: %d",z);
        break;
        case 4:
        z=x/y;
        printf("Division Answer: %d",z);
        break;
        case 5:
        exit(0);
        break;
        default:
        printf("please enter valid choice");
    }

        printf("\n\ndo you want to enter more?(y/n):");
        //scanf("%d",&b);
        scanf("%c",&d);
    }
    while(d == 'y');
    return 0;
}
