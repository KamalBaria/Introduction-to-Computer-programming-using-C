#include<stdio.h>

union computer
{
    char pro[6];
    char ram[10],sto[10];

    float price;
}c1,c2;
void main()
{
    printf("Name of processor :");
    scanf("%s",&c1.pro);
    printf("\nEnter Ram & Storage :");
    scanf("%s %s",&c1.ram,&c1.sto);
    printf("\nprice: 50k");

    printf("\nName of processor: ");
    scanf(" %s",&c2.pro);
    printf("\nEnter Ram & Storage: ");
    scanf("%s %s",&c2.ram,&c2.sto);
    printf("\nprice: 60k");

    printf(" %s\n%s\n%s\n",c1.pro,c1.ram,c1.sto);
    printf("\n%s\n%s\n%s\n",c2.pro,c2.ram,c2.sto);
}
