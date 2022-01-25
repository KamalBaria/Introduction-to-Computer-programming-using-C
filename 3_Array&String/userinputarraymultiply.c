#include<stdio.h>

void main()
{
    int i,j,k,l,m,op;
    char b;
    printf("Enter Number of Rows: ");
    scanf("%d",&i);
    printf("Enter Number of Column: ");
    scanf("%d",&j);

    int arr1[i][j],arr2[i][j],arr3[i][j];

    printf("\n5Enter Values of Array 1\n");
    for(k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {

            printf("Enter[%d][%d] = ",k,l);
            scanf("%d",&arr1[k][l]);
        }
    }

    printf("\nEnter Values of Array 2\n");
    for(k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {

            printf("Enter[%d][%d] = ",k,l);
            scanf("%d",&arr2[k][l]);
        }
    }

    printf("Value of Array 1\n");
    for(k=0;k<i;k++)
    {
        printf("\n");
        for(l=0;l<j;l++)
        {
            printf("x[%d][%d] = %d\t",k,l,arr1[k][l]);
        }
    }

    printf("\nValue of Array 2\n");
    for(k=0;k<i;k++)
    {
        printf("\n");
        for(l=0;l<j;l++)
        {
            printf("x[%d][%d] = %d\t",k,l,arr2[k][l]);
        }
    }


        for(k=0;k<i;k++)
        {
            for(l=0;l<j;l++)
            {
                arr3[k][l]=0;
                for(m=0;m<j;m++)
                {
                    arr3[k][l] += arr1[k][m]*arr2[m][l];
                }
            }

        }

    printf("\nValue of Array 3\n");
    for(k=0;k<i;k++)
    {

        for(l=0;l<j;l++)
        {
            printf("x[%d][%d] = %d\t",k,l,arr3[k][l]);
        }
        printf("\n");
    }

return 0;
}



