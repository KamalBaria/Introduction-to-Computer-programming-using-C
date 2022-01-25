#include<stdio.h>

void main()
{
    int x[3] = {5,10,15};
    int y[3] = {20,25,30};

    for(int i=0;i<3;i++)
    {
        printf("%d\t",x[i]+y[i]);
    }
}
