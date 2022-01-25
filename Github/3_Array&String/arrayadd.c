#include<stdio.h>

void main()
{
    int i = 0,j = 0;
    int arr[2][2] = {{5,6},{10,-9}};
    int arr2[2][2] = {{5,-8},{1,3}};
    int arr3[2][2];

    for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++)
        {
            printf("[%d][%d]= %d\t",i,j,arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++)
        {
            printf("[%d][%d]= %d\t",i,j,arr2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++)
        {
            arr3[i][j] = arr2[i][j] + arr[i][j];
            printf("[%d][%d]= %d\t",i,j,arr3[i][j]);
        }
        printf("\n");
    }
}
