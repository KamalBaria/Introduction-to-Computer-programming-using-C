#include<stdio.h>
void main ()
{
    int i, j,x;
    int a[10] = { 50,60,100,1,-56,999,48651,31,20,-5};
    for(i = 0; i<10; i++)
    {
        for(j = i+1; j<10; j++)
        {
            if(a[j] > a[i])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    printf("Sorted Number List \n");
    for(i = 0; i<10; i++)
    {
        printf("%d\n",a[i]);
    }
}
