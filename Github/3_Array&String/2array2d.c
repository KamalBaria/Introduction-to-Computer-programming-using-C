
#include<stdio.h>
void main()
{

int x[3][3];
int i,j;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Enter[%d][%d] = ",i,j);
        scanf("%d",&x[i][j]);
    }
}
for(i=0;i<3;i++)
{
    printf("\n");
    for(j=0;j<3;j++)
    {
    printf("x[%d][%d] = %d\t",i,j,x[i][j]);
    }
}
return 0;
}
