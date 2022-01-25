#include<stdio.h>

struct computer
{
    char pro[6];
    int ram,sto;

    float price;
}c1,c2;
void main()
{
    printf("Name of processor :");
    scanf("%s",&c1.pro);
    printf("\nEnter Ram & Storage :");
    scanf("%d %d",&c1.ram,&c1.sto);
    printf("\nprice: 50k");

    printf("\nName of processor: ");
    scanf(" %s",&c2.pro);
    printf("\nEnter Ram & Storage: ");
    scanf("%d %d",&c2.ram,&c2.sto);
    printf("\nprice: 60k");

    printf(" %s\n%d\n%d\n",c1.pro,c1.ram,c1.sto);
    printf(" %s\n%d\n%d\n",c2.pro,c2.ram,c2.sto);
}
