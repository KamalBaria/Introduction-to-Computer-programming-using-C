#include<stdio.h>
int main()
{
    int x,i;
    int prime = 0;

    printf("Enter A Number: ");
    scanf("%d",&x);

    int y = x/2;

    if(x==1)
    {
        printf("1 Is Not Prime Or Composite");
    }
    else
    {
        for(i=2;i<=y;i++)
        {
            if(x%i==0)
            {
                prime = 1;
                break;
            }
        }
        if(prime == 0)
            printf("Number Is Prime");
        else
            printf("Number Is Not Prime");
    }
    return 0;
}
