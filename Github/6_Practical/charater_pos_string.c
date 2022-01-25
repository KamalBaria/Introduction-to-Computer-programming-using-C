#include<stdio.h>

int main()
{
    char st[1000];
    char ch;
    int i;

    printf("Enter String: ");
    scanf("%s",&st);

    printf("Enter Character to find: ");
    scanf(" %c",&ch);

    for(i=0;st[i];i++)
    {
        if(st[i]==ch)
        {
            printf("Character %c Position: %d\n",ch,i+1);
        }
    }
    return 0;
}
