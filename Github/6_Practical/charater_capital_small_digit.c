#include<stdio.h>

void main()
{
    char a;

    printf("Enter A Character: ");
    scanf("%c",&a);

    if(a>='a'&&a<='z')
    {
        printf("\n%c is Small Letter.\n",a);
    }
    else if(a>='A'&&a<='Z')
    {
        printf("\n%c is Capital Letter.\n",a);
    }
    else if(a>='0'&&a<='9')
    {
        printf("\n%c is Digit.\n",a);
    }
    else
    {
        printf("\n%c is Special Character.\n",a);
    }
    return 0;
}
