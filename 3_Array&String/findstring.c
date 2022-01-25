#include<stdio.h>

void main()
{
    char str[27] = "abcdefghijklmnopqrstuvwxyz";
    char a;
    int b;
    int i=0;
    printf("Enter character to find: ");
    scanf(" %c",&a);

    for(i=0;str[i];++i)
    {
        if(a==str[i])
        {
            printf("character %c at: %d",a,i);
        }
    }

    return 0;
}
