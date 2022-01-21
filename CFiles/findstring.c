#include<stdio.h>

void main()
{
    char str[27] = "abcdefghijklmnopqrstuvwxyz";
    char a[0];
    int b;
    int i=0;
    printf("Enter character to find: ");
    scanf("%c",&a[0]);

    for(i=0;str[i];i++)
    {
        if(str[i]==a[0])
        {
            printf("character %c at: %d",a[0],i);
        }
    }

    return 0;
}
