#include<stdio.h>

int main()
{
    char st[1000];
    char ch,re;
    int i;

    printf("Enter String: ");
    scanf("%s",&st);

    printf("Enter Character to Replace: ");
    scanf(" %c",&ch);

    printf("Enter Character to Replace With:");
    scanf(" %c",&re);

    for(i=0;st[i];i++)
    {
        if(st[i]==ch)
        {
            st[i]=re;
        }
    }
    printf("\nString After Replacing %c by %c: %s",ch,re,st);
    return 0;
}
