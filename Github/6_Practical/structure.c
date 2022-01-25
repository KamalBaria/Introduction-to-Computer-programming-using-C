#include<stdio.h>

struct info
{
    char fname[20],lname[20];
    int iarno;
} i1;

int main()
{
    printf("Enter First Name: ");
    scanf(" %s",&i1.fname);
    printf("Enter Last Name: ");
    scanf("  %s",&i1.lname);
    printf("Enter IAR  No.: ");
    scanf("%d",&i1.iarno);

    printf("\nINFO");
    printf("\nFirst Name: %s",i1.fname);
    printf("\nLast Name: %s",i1.lname);
    printf("\nIAR No.: %d",i1.iarno);

}
