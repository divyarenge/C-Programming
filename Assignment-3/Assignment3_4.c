#include<stdio.h>

char DisplayConvert(char cChar)
{
    if(cChar >= 'a' && cChar <= 'z')
    {
        return cChar - 32;
    }
    else if(cChar >= 'A' && cChar <= 'Z')
    {
        return cChar + 32;
    }
    else
    {
        printf("Invalid input");
    }
}

int main()
{
    char cValue = 0;
    char cRet = 0;

    printf("Enter Character: \n");
    scanf("%c",&cValue);

    cRet = DisplayConvert(cValue);

    printf("Converted Character: %c\n", cRet);

    return 0;
}