#include<stdio.h>
void main()
{

int x[2][2];
x[0][0]=-5;
x[0][1]=50;
x[1][0]=7;
x[1][1]=95;


for(int i=0;i<2;i++)
{
    printf("\n");
    for(int j=0;j<2;j++)
    {
    printf("x[%d][%d] = %d\t",i,j,x[i][j]);
    }
}
return 0;
}
