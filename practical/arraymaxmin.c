#include<stdio.h>

int maxmin(int a[],int n)
{
 	int min,max,i;
 	min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];
		   if(max<a[i])
		    max=a[i];
    }
    printf("\nMinimum Number of array is : %d",min);
    printf("\nMaximum Number of array is : %d",max);
}
int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter Number [%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nArray Value:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    maxmin(a,10);
}

